class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=accumulate(nums.begin(),nums.end(),0);
        if(s<target) return 0;
        int n = nums.size();
        int left = 0, right = 0;
        int sum = 0;
        int res = INT_MAX;
        while(right < n){
            sum += nums[right];
            while(sum >= target){
                res = min(res,right - left + 1);
                sum -= nums[left];
                left += 1;
            }
           right += 1;
        }
        return res;
    }
};