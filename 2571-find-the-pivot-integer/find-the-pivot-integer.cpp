class Solution {
public:
    int pivotInteger(int n) {
       if(n==1) return 1;
       vector<int>prefix;
       vector<int>suffix;
       int s1=0,s2=0;
        for(int i=1;i<=n;i++){
            s1+=i;
            prefix.push_back(s1);
        }
        for(int i=n;i>=1;i--){
            s2+=i;
            suffix.push_back(s2);
        }
        reverse(suffix.begin(),suffix.end());
        for(int i=0;i<prefix.size();i++){
            if(prefix[i]==suffix[i]){
                return i+1;
            }
        }
        return -1;
    }
};