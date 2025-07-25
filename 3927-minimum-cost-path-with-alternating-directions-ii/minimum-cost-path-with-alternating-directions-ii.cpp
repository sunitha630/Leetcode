class Solution {
public:
    long long minCost(int m, int n, vector<vector<int>>& waitCost) {
        vector<vector<long long>>dp(m,vector<long long>(n));
        dp[0][0]=1;
        for(long long i=1;i<n;i++){
            dp[0][i]=dp[0][i-1]+waitCost[0][i]+(0+1)*(i+1);
        }
        for(long long i=1;i<m;i++){
            dp[i][0]=dp[i-1][0]+waitCost[i][0]+(i+1)*(0+1);
        }
        for(long long i=1;i<m;i++){
            for(long long  j=1;j<n;j++){
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+waitCost[i][j]+(i+1)*(j+1);
            }
        }
        return dp[m-1][n-1]-waitCost[m-1][n-1];
    }
};