class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxWindow = 0;
        for(int i=0;i<k;i++){
            maxWindow+=nums[i];
        }
        int result=maxWindow;
        for(int i=k;i<nums.size();i++){
            maxWindow = maxWindow - nums[i-k]+nums[i];
            result = max(result,maxWindow);
        }
        return (double) result/k;

    }
};