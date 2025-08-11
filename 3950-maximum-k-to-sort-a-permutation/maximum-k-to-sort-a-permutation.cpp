class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                res=nums[i];
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                res&=nums[i];
            }
        }
        return res;
    }
};