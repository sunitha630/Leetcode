class Solution {
public:
    long long countStableSubarrays(vector<int>& capacity) {
        long long res=0;
        vector<long long>prefix_sum(capacity.size());
        prefix_sum[0]=capacity[0];
        for(int i=1;i<capacity.size();i++){
            prefix_sum[i]+=(prefix_sum[i-1]+capacity[i]);
           
        }
       map<pair<long long,long long>,int>mp;
    //    mp[{capacity[0],prefix_sum[0]}]++;
    //    mp[{capacity[1],prefix_sum[1]}]++;
       for(int i=1;i<capacity.size();i++){
        if(mp.find({capacity[i],prefix_sum[i-1]-capacity[i]})!=mp.end())      {
            res+=mp[{capacity[i],prefix_sum[i-1]-capacity[i]}];
        }
        mp[{capacity[i-1],prefix_sum[i-1]}]++;
       }
       return res;
        
        
    }
};