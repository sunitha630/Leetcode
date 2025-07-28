class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();

        if(obstacleGrid[0][0] == 1 || obstacleGrid[n-1][m-1] == 1){
            return 0;
        }
        vector<vector<int>> dp(n,vector<int>(m,0));
        cout<<n<<" "<<m<<endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout<<obstacleGrid[i][j]<<" ";
                if(i==0 && j==0){
                    
                    dp[i][j] = 1;
                }
               else if(i==0 && j>0){
                if(obstacleGrid[i][j] == 1){
                   dp[i][j]=0;

                }
                else{
                    dp[i][j] = dp[i][j-1];
                }
               }
               else if(j==0 && i>0){
                if(obstacleGrid[i][j] == 1){
                   
                   dp[i][j]=0;
                }
                else{
                  
                    dp[i][j] = dp[i-1][j];
                }
               }
               else
               {
              
                if(obstacleGrid[i][j]!=1){
                   
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
                
               }
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[n-1][m-1];
    }
};