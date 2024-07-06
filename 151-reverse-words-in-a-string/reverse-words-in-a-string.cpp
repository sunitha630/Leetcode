class Solution {
public:
    string reverseWords(string s) {
        string res="";
        string dummy="";
        
        for(int i=s.size()-1;i>=0;i--){
           if(s[i]!=' '){
            dummy+=s[i];
           }
           else if(s[i]==' ' && dummy!=""){
            reverse(dummy.begin(),dummy.end());
            res+=dummy;
            res+=' ';
            dummy="";
           }
           else{
             dummy="";
           }
        }
        if(dummy!=""){
        reverse(dummy.begin(),dummy.end());
        res+=dummy;
        }

        for(int i=0;i<res.size();i++){
            if(res[i]==' '){
                res.erase(res.begin()+i);
            }
            else{
                break;
            }
        }
        for(int i=res.size()-1;i>=0;i--){
            if(res[i]==' '){
                res.erase(res.begin()+i);
            }
            else{
                break;
            }
        }
        return res;
    }
};