class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mini=nums[0];
        int maxi=nums[0];
        int result=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(mini,maxi);
            }
            maxi=max(nums[i],nums[i]*maxi);
            mini=min(nums[i],nums[i]*mini);
            result=max(result,maxi);
        }
        return result;
    }
};