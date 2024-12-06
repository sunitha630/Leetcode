class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
     unordered_map<int,int>mp;
     unordered_map<int,int>::iterator it;
     for(int i=0;i<nums.size();i++){
        mp[nums[i]]=i;
     } 
     for(int i=0;i<operations.size();i++){
        int k=mp[operations[i][0]];
        mp[operations[i][1]]=k;
        mp.erase(operations[i][0]);
     }
     for(it=mp.begin();it!=mp.end();it++){
        nums[it->second]=it->first;
     }
     return nums;

    }
};