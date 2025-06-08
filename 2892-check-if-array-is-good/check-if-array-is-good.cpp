class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi=INT_MIN;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mp[nums[i]]++;
        }
        if(nums.size() == maxi+1){
           for(auto it:mp){
                if(it.first!=maxi && it.second>=2) return false;
                else if(it.first==maxi && it.second!=2) return false;
           }
           return true;
        }
        else{
            return false;
        }
    }
};