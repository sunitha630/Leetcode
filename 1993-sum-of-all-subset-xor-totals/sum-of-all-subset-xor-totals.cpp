class Solution {
public:
    int sum=0;
    void recurse(vector<int>&nums,int i,int n,int xo){
        if(i>=n){
            sum+=xo;
            return;
        }
        recurse(nums,i+1,n,xo^nums[i]);
        recurse(nums,i+1,n,xo);
    }
    int subsetXORSum(vector<int>& nums) {
        recurse(nums,0,nums.size(),nums[0]);
        return sum;
    }
};