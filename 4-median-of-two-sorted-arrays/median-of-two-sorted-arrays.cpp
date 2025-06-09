class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums;
        for(int i=0;i<nums1.size();i++){
            nums.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            nums.push_back(nums2[i]);
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums.size()%2!=0){
            return nums[n/2]/1.0;
        }
       return (nums[n/2]+nums[(n/2)-1])/2.0;
        
    }
};