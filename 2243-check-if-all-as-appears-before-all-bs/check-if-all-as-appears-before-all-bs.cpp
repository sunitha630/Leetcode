class Solution {
public:
    bool checkString(string s) {
       int n=s.size();
       for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                n=i;
                break;
            } 
       } 
       for(int i=0;i<s.size();i++){
            if(s[i]=='a' && i>n){
                return false;
            }
       }
       return true;
    }
};