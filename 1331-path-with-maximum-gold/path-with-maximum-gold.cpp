class Solution {
public:
    int recurse(vector<vector<int>>& grid,vector<vector<int>>& visited,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || visited[i][j] || grid[i][j]==0){
            return 0;
        }
        visited[i][j]=1;
        int ma=0;
        ma=max(ma,recurse(grid,visited,i,j-1,m,n));
        ma=max(ma,recurse(grid,visited,i,j+1,m,n));
        ma=max(ma,recurse(grid,visited,i-1,j,m,n));
        ma=max(ma,recurse(grid,visited,i+1,j,m,n));
        visited[i][j]=0;
        return ma+grid[i][j];
       
        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n));
        int maxi=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0)
                maxi=max(maxi,recurse(grid,visited,i,j,m,n));
            }
        }
        return maxi;

    }
};