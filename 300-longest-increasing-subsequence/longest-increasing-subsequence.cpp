class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
            int val=nums[i];
            for(int j=i;j>=0;j--){
                if(val>nums[j]){
                    dp[i]=max(dp[i],dp[j] + 1);
                    // break;
                }
            }
            // cout<<dp[i]<<" ";
        }
        int res=*max_element(dp.begin(),dp.end());
        return res;
    }
};