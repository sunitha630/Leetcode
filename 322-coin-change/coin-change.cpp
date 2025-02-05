class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size(),x=amount;
        if(x==0) return 0;
        vector<vector<long long>> dp(n, vector<long long>(x, LLONG_MAX));
    for (long long i = 0; i < x; i++) {
        if ((i + 1) % coins[0] == 0) {
            dp[0][i] = (i + 1) / coins[0];
        }
        else{
        	dp[0][i]=0;
		}
    }
    for (long long i = 1; i < n; i++) {
        for (long long j = 0; j < x; j++) {
            if (j- coins[i] < -1) {
                dp[i][j] = dp[i - 1][j];
            } else if (j - coins[i] == -1) { 
                dp[i][j] = 1;
            } else {
            	if(dp[i-1][j]!=0 && dp[i][j-coins[i]]!=0){
            		dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i]]);
				}
				else if(dp[i-1][j]!=0 && dp[i][j-coins[i]]==0){
					dp[i][j]=dp[i-1][j];
				}
				else if(dp[i-1][j]==0 && dp[i][j-coins[i]]!=0){
					dp[i][j]=1+dp[i][j-coins[i]];
				}
				else {
					dp[i][j]=0;
				}
            }
        }
    }
    if(dp[n-1][x-1]!=0) return dp[n-1][x-1];
    return -1;

    }
};