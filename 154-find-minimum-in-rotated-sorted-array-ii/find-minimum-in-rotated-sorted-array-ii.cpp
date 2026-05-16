class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        int res=INT_MAX;
        while(l<=h){
            int mid=(l+h)/2;
            res=min(res,nums[mid]);
            if(nums[l]==nums[mid] && nums[mid]==nums[h]){
                l++;
                h--;
                
            }
            else if(nums[mid]<=nums[h]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};