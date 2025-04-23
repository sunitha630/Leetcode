class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int>mp;
        for(int i=1;i<=n;i++){
            int dummy=i,sum=0;
            while(dummy){
                sum+=dummy%10;
                dummy=dummy/10;
            }
            mp[sum]++;
        }
        int m=INT_MIN;
        for(auto it:mp){
            m=max(m,it.second);
        }
        int res=0;
        for(auto it:mp){
            if(it.second==m)
            {
                res++;
            }
        }
        return res;
    }
};