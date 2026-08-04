class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int start=nums[0],end=nums[nums.size()-1];
        vector<int>res;
        for(int i=start;i<=end;i++){
            if(mp[i]<=0){
                res.push_back(i);
            }
        }
        return res;
    
    }
};