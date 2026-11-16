class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            int flag=1;
            for(int j=mp[nums1[i]]+1;j<nums2.size();j++){
                if(nums1[i]<nums2[j]){
                    res.push_back(nums2[j]);
                    flag=0;
                    break;
                }
            }
            if(flag){
                res.push_back(-1);
            }
        }
        return res;

    }
};