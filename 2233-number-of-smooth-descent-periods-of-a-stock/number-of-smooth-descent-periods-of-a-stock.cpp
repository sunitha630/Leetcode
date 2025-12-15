class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
       int n=prices.size();
       vector<long long>dp(n);
       dp[0]=1;
       int l=0,h=1;
       while(h<prices.size()){
        if(prices[h-1]-prices[h]==1){
           dp[h]=dp[h-1]+1+(h-l);
           h++;
        }
        else{
            dp[h]=dp[h-1]+1;
            
            l=h;
            h++;

        }
        
       }
      
       return dp[n-1];
    }
};