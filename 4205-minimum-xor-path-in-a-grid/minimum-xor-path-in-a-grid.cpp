class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        // for(int i=1;i<n;i++){
        //    grid[0][i]=grid[0][i]^grid[0][i-1];
          
        // }
        // cout<<endl;
        // for(int i=1;i<m;i++){
        //     grid[i][0]=grid[i][0]^grid[i-1][0];
        // }
        // for(int i=1;i<m;i++){
        //     for(int j=1;j<n;j++){
        //         grid[i][j]=grid[i][j]^min(grid[i-1][j],grid[i][j-1]);
            
        //     }
        // }
        
        // return grid[m-1][n-1];
        vector<vector<unordered_set<int>>> dp(m, vector<unordered_set<int>>(n));
        dp[0][0].insert(grid[0][0]);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i>0){
                    for(int f:dp[i-1][j]){
                        dp[i][j].insert(f^grid[i][j]);
                    }
                }
                 if(j>0){
                    for(int f:dp[i][j-1]){
                        dp[i][j].insert(f^grid[i][j]);
                    }
                }
            }
        }
        return *min_element(dp[m-1][n-1].begin(),dp[m-1][n-1].end());
    }
};