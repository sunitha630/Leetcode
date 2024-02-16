class Solution {
public:
    void subset(vector<int>&nums,int ind,map<vector<int>,int>&mp,vector<int>v) {
        if(ind == nums.size()){
            mp[v]++;
            return;
        }
       v.push_back(nums[ind]);
       subset(nums,ind+1,mp,v);
       v.pop_back();
       subset(nums,ind+1,mp,v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      map<vector<int>,int>mp;
      vector<vector<int>>res;
      sort(nums.begin(),nums.end());
      subset(nums,0,mp,{});
      map<vector<int>,int>::iterator it;
      for(it=mp.begin();it!=mp.end();it++){
          res.push_back(it->first);
      }
      return res;
    }
};