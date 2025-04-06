class Solution {
public:
    int maxArea(vector<vector<int>>& grid,vector<vector<int>>&visited,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m|| j>=n || grid[i][j]==0 || visited[i][j]==1) return 0;
        visited[i][j]=1;
        int left=maxArea(grid,visited,i+1,j,m,n);
        int right=maxArea(grid,visited,i-1,j,m,n);
        int up=maxArea(grid,visited,i,j+1,m,n);
        int down=maxArea(grid,visited,i,j-1,m,n);
        //visited[i][j]=0;
        return left+right+up+down+1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size()));
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]!=0)
                res=max(res,maxArea(grid,visited,i,j,grid.size(),grid[0].size()));
                cout<<res<<" ";
            }
            cout<<endl;
        }
        return res;
    }
};