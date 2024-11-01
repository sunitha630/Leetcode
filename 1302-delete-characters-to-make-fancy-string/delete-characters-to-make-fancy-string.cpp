class Solution {
public:
    string makeFancyString(string s) {
        string res="";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == s[i+1]){
                cnt++;
            }
            else{
                if(cnt >= 2){
                    res+=s[i];
                    res+=s[i];
                }
                else if(cnt==1){
                    res+=s[i];
                    res+=s[i];
                }
                else if(cnt==0){
                    res+=s[i];
                }
                cnt=0;
            }
        }
        return res;
    }
};