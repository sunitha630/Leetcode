class Solution {
public:
    long long minimumSteps(string s) {
        long long res=0;
        int onesCount=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                res+=onesCount;
            }
            else{
                onesCount++;
            }
        }
        return res;
    }
};