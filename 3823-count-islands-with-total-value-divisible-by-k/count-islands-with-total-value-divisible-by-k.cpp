class Solution {
public:
    long long sum(vector<vector<int>>& grid,vector<vector<int>>& visited,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || visited[i][j] || grid[i][j]==0) return 0;
        visited[i][j]=1;
        long long l=sum(grid,visited,i-1,j,m,n);
        long long r=sum(grid,visited,i+1,j,m,n);
        long long a=sum(grid,visited,i,j-1,m,n);
        long long b=sum(grid,visited,i,j+1,m,n);
        return l+r+a+b+grid[i][j];
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    long long val=sum(grid,visited,i,j,m,n);
                    
                    if(val%k==0 && val!=0)  cnt++;
                }
            }
        }
        return cnt;
    }
};