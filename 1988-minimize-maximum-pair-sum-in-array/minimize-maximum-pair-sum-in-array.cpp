class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int res=-1;
        int l=0,h=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(l<=h){
            res=max(nums[l]+nums[h],res);
            l++;
            h--;
        }
        return res;

    }
};