class Solution {
public:
    bool flag=false;
    void check(vector<int>& nums, int i, long long pro1, long long pro2, int count1, int count2, long long target) {
         if (flag) return;
        if (i==nums.size()) {
          if (count1 > 0 && count2 > 0 && pro1 == target && pro2 == target) {
                flag = true;
            }
            return;
        }
        if (pro1 <= LLONG_MAX / nums[i]) {
        check(nums, i + 1, pro1 * nums[i], pro2, count1 + 1, count2, target);
    }
        if (pro2 <= LLONG_MAX / nums[i]) {
        check(nums, i + 1, pro1, pro2 * nums[i], count1, count2 + 1, target);
    }
    }
    bool checkEqualPartitions(vector<int>& nums, long long target) {
     
            check(nums,0,1,1,0,0,target); 
        
     return flag;
    }
};