class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int res=1;
        int start=0;
        for(int i=1;i<s.size();i++){
            int st=i;
            int e=i;
            while(st>=0 && e<n && s[st]==s[e]){
                st--;
                e++;
            }
            if(e-st-1>res){
                res=e-st-1;
                start=st+1;
            }
            int st1=i-1;
            int e1=i;
            while(st1>=0 && e1<n && s[st1]==s[e1]){
                st1--;
                e1++;
            }
            if(e1-st1-1>res){
                res=e1-st1-1;
                start=st1+1;
            }
        }
        string resu=s.substr(start,res);
        return resu;
        }
    
};