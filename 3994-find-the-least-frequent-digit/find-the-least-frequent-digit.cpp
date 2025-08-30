class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>mp;
        while(n){
            mp[n%10]++;
            n=n/10;
        }
        
        int res_val=INT_MAX;
        vector<int>res;
        for(auto &it:mp){
           if(res_val>=it.second) res_val=it.second;
        }
        for(auto &it:mp){
            if(it.second == res_val) res.push_back(it.first);
        }
        int k=*min_element(res.begin(),res.end());
        return k;

    }
};