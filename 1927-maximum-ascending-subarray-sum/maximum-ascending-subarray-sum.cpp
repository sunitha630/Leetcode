class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       int n=nums.size(),sum=0,ans=0;
       for(int i=0;i<n-1;i++){
        if(nums[i]>=nums[i+1]){
            sum+=nums[i];
            ans=max(ans,sum);
            sum=0;
        }
        else
        {
            sum+=nums[i];
        }
       }
       sum+=nums[n-1];
       ans=max(ans,sum);
       return ans;
    }
};