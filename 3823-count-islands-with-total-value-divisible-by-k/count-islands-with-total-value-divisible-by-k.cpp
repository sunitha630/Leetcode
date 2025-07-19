class Solution {
public:
    long long  dfs(vector<vector<int>>&grid,int m,int n,int i,int j,vector<vector<int>>&visited){
        if(i<0 || j<0 || i>=m || j>=n || visited[i][j] || grid[i][j]==0){
            return 0;
        }
        visited[i][j]=1;
        long long left=dfs(grid,m,n,i,j-1,visited);
        long long  right=dfs(grid,m,n,i,j+1,visited);
        long long up=dfs(grid,m,n,i-1,j,visited);
        long long down=dfs(grid,m,n,i+1,j,visited);
        return left+right+up+down+grid[i][j];
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        int res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                  long long s=dfs(grid,m,n,i,j,visited);
                  
                  if(s!=0 && s%k==0){
                    res++;
                  }
                }
            }
        }
        return res;
    }
};