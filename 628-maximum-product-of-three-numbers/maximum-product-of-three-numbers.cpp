class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size()==3){
            return nums[0]*nums[1]*nums[2];
        }
        sort(nums.begin(),nums.end());
        int m1=nums[0]*nums[1]*nums[nums.size()-1];
        int m2=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        return max(m1,m2);
        
    }
};