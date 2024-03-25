class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mp;
        map<int,int>::iterator it;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>res;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second==2){
                res.push_back(it->first);
            }
        }
        return res;
    }
};