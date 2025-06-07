class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
    int global_max=0,local_max=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]<=local_max+nums[i]){
                local_max=local_max+nums[i];
            }
            else if(nums[i]>local_max+nums[i]){
                local_max=nums[i];
            }
            global_max=max(local_max,global_max);
        }
        int global_min=0,local_min=0;
        sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]>=local_min+nums[i]){
                local_min=local_min+nums[i];
            }
            else if(nums[i]<local_min+nums[i]){
                local_min=nums[i];
            }
            global_min=min(local_min,global_min);
        }
        int k=max(abs(global_max),abs(global_min));
        return k;
    }
};