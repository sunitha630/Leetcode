class Solution {
public:
    int res=0;
    void recurse(vector<int>&nums,int target,int ind,long long sum){
        if(ind>=nums.size()){
            if(sum==target){

                res++;
                
            }
            return;
        }
            recurse(nums,target,ind+1,sum+nums[ind]);
            recurse(nums,target,ind+1,sum-nums[ind]);
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        recurse(nums,target,0,0);
        return res;
    }
};