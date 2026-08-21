class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
            max_sum=max(max_sum+nums[i],nums[i]);
            res=max(res,max_sum);
        }
        return res;
    }
};