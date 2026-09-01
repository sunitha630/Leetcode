class Solution {
public:
    int findMin(vector<int>& nums) {

        int res = INT_MAX;
        int l=0,h=nums.size()-1;
        while(l<=h){
            int m=l+((h-l)/2);
            res=min(res,nums[m]);
            if(nums[m]>nums[h]){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return res;
    }
};