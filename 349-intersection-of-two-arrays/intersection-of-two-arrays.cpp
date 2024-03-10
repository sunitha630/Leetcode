class Solution {
public:
    bool search(vector<int>&nums1,int tar){
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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int>s;
       vector<int>res;
       sort(nums1.begin(),nums1.end());
       for(int i=0;i<nums2.size();i++){
           if(search(nums1,nums2[i])){
               s.insert(nums2[i]);
           }
       }
       for(auto &str:s){
           res.push_back(str);
       }
       return res;
    }
};