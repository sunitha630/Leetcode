class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        map<char,int>::iterator it;
        string res="";
        char extra=' ';
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second%2==0){
                for(int i=0;i<it->second/2;i++){
                    res+=it->first;
                }
            }
            else{
               for(int i=0;i<it->second/2;i++){
                    res+=it->first;
                } 
                extra=it->first;
            }
        }
        int k=res.size();
        if(extra==' '){
            for(int i=k-1;i>=0;i--){
                res+=res[i];
            }
        }
        else{
            res+=extra;
             for(int i=k-1;i>=0;i--){
                res+=res[i];
            }
        }
        return res;
    }
};