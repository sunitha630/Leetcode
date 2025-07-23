class Solution {
public:
    int change(int amount, vector<int>& coins) {
       
        if(amount==0) return 1;
        int m=coins.size();
        vector<vector<unsigned long long>>dp(m,vector<unsigned long long>(amount,0));
        for(int i=0;i<amount;i++){
            if( (i+1) % coins[0] == 0){
                dp[0][i]=1;
            }
            else{
                dp[0][i]=0;
            }
        }
        for(int i=1;i<m;i++){
            int coin=coins[i];
            for(int j=0;j<amount;j++){
                if((j+1) < coin){
                    dp[i][j]=dp[i-1][j];
                }
                else if((j+1) == coin){
                    dp[i][j]=dp[i-1][j]+1;
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-coin];
                }
            }
        }
        return dp[m-1][amount-1];
    }
};