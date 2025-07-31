class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
       
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>vec;
        int i=0;
        for(auto &it:mp){
            vec.push_back({it.first,it.second});
        }
        if(vec.size()==0) return 0;
        if(vec.size()==1) return vec[0].first*vec[0].second;
        vector<int>dp(vec.size(),0);

        dp[0]=vec[0].first*vec[0].second;
        if(vec[1].first-1==vec[0].first){
            dp[1]=max(dp[0],vec[1].first*vec[1].second);
        }
        else{
            dp[1]=(dp[0])+(vec[1].first*vec[1].second);
        }
        for(int i=2;i<vec.size();i++){
            if(vec[i].first-1==vec[i-1].first){
                dp[i]=max(dp[i-1],dp[i-2]+(vec[i].first*vec[i].second));
            }
            else{
                dp[i]=dp[i-1]+(vec[i].first*vec[i].second);
            }
        }
        for(int i=0;i<vec.size();i++){
            cout<<dp[i]<<" ";
        }
        return dp[vec.size()-1];
    }
};