class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int ls=0,rs=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) ls+=nums[i];
        }
         for(int i=1;i<nums.size()-1;i++){
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1]) rs+=nums[i];
        }
        return ls-rs;
    }
};