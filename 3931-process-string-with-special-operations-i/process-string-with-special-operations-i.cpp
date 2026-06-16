class Solution {
public:

    string processStr(string s) {
       string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                if(res.size()>0) res.pop_back();
            }
            else if(s[i]=='#'){
               string dummy="";
               dummy+=res;
               dummy+=res;
               res=dummy;
            }
            else if(s[i]=='%'){
               if(res.size()>0) reverse(res.begin(),res.end());
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};