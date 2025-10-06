class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int k=nums.size()/3;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>res;
        for(auto it:mp){
            if(it.second>k){
                res.push_back(it.first);
            }
        }
        return res;
    }
};