class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int res=INT_MAX;
        while(low<=high){
            int mid = (low + high)/2;
            res=min(res,nums[mid]);
            if(nums[low]<=nums[mid] && nums[mid]>=nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;

    }
};