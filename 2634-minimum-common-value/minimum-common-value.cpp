class Solution {
public:
    bool isThere(int tar,vector<int>& nums1){
        int l=0,h=nums1.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums1[mid]==tar){
                return true;
            }
            else if(nums1[mid]>tar){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums2.size();i++){
            if(isThere(nums2[i],nums1)){
                return nums2[i];
            }
        }
        return -1;

    }
};