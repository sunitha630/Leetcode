class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
        }
        vector<int>res;
        res.push_back(mp.rbegin()->first);
        for(int i=k;i<nums.size();i++){
            if(nums[i-k] == mp.rbegin()->first){
                if(mp.rbegin()->second>1){
                    
                    mp.rbegin()->second--;
                }
                else{
                    mp.erase(nums[i-k]);
                }
            }
            else{
                if(mp[nums[i-k]]>1){
                    mp[nums[i-k]]--;
                }
                else{
                mp.erase(nums[i-k]);
                }
            }
            mp[nums[i]]++;
            res.push_back(mp.rbegin()->first);
        }
        return res;
    }
};