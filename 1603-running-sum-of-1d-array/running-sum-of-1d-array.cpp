class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //nums --> 1 2 3 4 5
        int n=nums.size(); //n-->5
        vector<int>rs(n); // 0 0 0 0 0
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            rs[i]=sum;
        }
        return rs;
    }
};