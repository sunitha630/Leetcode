class Solution {
public:

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>g(m,vector<int>(n,1));
        if(obstacleGrid[0][0]==1) return 0;
        g[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j] == 1){
                    g[i][j]=0;
                }
                else{
                    if(i==0){
                        if(j!=0){
                            g[i][j]=g[i][j-1];
                        }
                    }
                    else if(j==0){
                        if(i!=0){
                            g[i][j]=g[i-1][j];
                        }
                    }
                    else{
                        g[i][j]=g[i-1][j]+g[i][j-1];
                    }
                }
               
            }
            cout<<endl;
        }
        return g[m-1][n-1];
    }
};