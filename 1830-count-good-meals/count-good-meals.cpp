class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
         int mod = 1000000007;
        vector<int>powers;
        for(int i=0;i<=21;i++){
            powers.push_back(pow(2,i));
        }
        map<int,int>mp;
        int res=0;
        for(int i=0;i<deliciousness.size();i++){
            mp[deliciousness[i]]++;
        }
        for(int i=0;i<deliciousness.size();i++){
            int a=deliciousness[i];
            for(int j=0;j<powers.size();j++){
                int val=powers[j];
                if(val>=a){
                    if(mp.find(val-a)!=mp.end()){
                       if(val-a==a){
                        res=(res+mp[val-a]-1)%mod;
                       }
                       else{
                        res=(res+mp[val-a])%mod;
                       }
                    }
                }
            }
        }
        return (res * 500000004LL) % mod;
    }
};