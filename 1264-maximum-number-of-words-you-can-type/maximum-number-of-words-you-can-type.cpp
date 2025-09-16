class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int cnt=0;
        map<char,int>mp;
        for(int i=0;i<brokenLetters.size();i++){
            mp[brokenLetters[i]]++;
        }
        bool flag=false;
        int spaces=1;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                if(flag) cnt++;
                flag=false;
                spaces++;
            }
            else{
             if(mp.find(text[i])!=mp.end()){
                flag=true;
            }
            }
        }
        if(flag) cnt++;
        return spaces-cnt;
    }
};