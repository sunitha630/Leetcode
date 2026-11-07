class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ma = 0;
        for (int i = 0; i < nums.size(); i++) {
            int pro = nums[i], _lcm = nums[i], _gcd = nums[i];
            int cnt = 1;
            for (int j = i + 1; j < nums.size(); j++) {
                pro *= nums[j];
                _lcm = lcm(_lcm, nums[j]);
                _gcd = gcd(_gcd, nums[j]);
                if (pro == _lcm * _gcd) {
                    cnt++;
                    ma = max(ma, cnt);
                } else {
                    break;
                }
            }
        }
        return ma;
    }
};