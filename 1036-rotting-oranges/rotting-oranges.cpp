class Solution {
public:
    //  void display(vector<vector<int>>& visited){
    //     for(int i=0;i<visited.size();i++){
    //         for(int j=0;j<visited[0].size();j++){
    //             cout<<visited[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //  }
    void recurse(vector<vector<int>>& grid,vector<vector<int>>& visited,int i,int j,int m,int n,int time){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 ||time>=visited[i][j]){
            return;
        }
        visited[i][j]=time;
        recurse(grid,visited,i,j-1,m,n,time+1);
        recurse(grid,visited,i,j+1,m,n,time+1);
        recurse(grid,visited,i-1,j,m,n,time+1);
        recurse(grid,visited,i+1,j,m,n,time+1);
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        bool flag=false;
        vector<vector<int>>visited(m,vector<int>(n,INT_MAX));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    recurse(grid,visited,i,j,m,n,0);
                }
                
            }
        }
    int res=0;
        for(int i=0;i<visited.size();i++){
            for(int j=0;j<visited[i].size();j++){
                if(grid[i][j]==1){
                    if(visited[i][j]==INT_MAX) return -1;
                    res=max(res,visited[i][j]);
                   
                }
                
            }
           
        }
        return res;


    }
};