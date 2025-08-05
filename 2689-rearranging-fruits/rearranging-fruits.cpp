class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        map<int,int>mp1;
        map<int,int>mp2;
        int min_ele=INT_MAX;
        long long ans=0;
        for(int i=0;i<basket1.size();i++){
            mp1[basket1[i]]++;
            min_ele=min(min_ele,basket1[i]);
        }
        for(int i=0;i<basket2.size();i++){
            mp2[basket2[i]]++;
            min_ele=min(min_ele,basket2[i]);
        }
        vector<int>res;
        for(auto &it:mp1){
            int dummy=it.second+mp2[it.first];
            if(dummy%2!=0) return -1;
            
           int k=(it.second-mp2[it.first])/2;
            while(k>=0 && k--){
                res.push_back(it.first);
            }
        }
        
        for(auto &it:mp2){
            int dummy=it.second+mp1[it.first];
            if(dummy%2!=0) return -1;
            int k=(it.second-mp1[it.first])/2;
            
            while(k>=0 && k--){
                res.push_back(it.first);
            }
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()/2;i++){
            ans+=min(2*min_ele,res[i]);
        }
        return ans;

    }
};