class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int>mp;
        for(int i=0;i<word.size();i++){
            if(word[i]>='a' && word[i]<='z'){
            mp[word[i]]=i;
            }
            else{
                if(mp.find(word[i])==mp.end()){
                    mp[word[i]]=i;
                }
            }
        }
        for(auto it:mp){

        }
        int res=0;
        for(int i='A';i<='Z';i++){
            if(mp.find(i)!=mp.end() && mp.find(i+32)!=mp.end()){
            if(mp[i]>mp[i+32]){

                res++;
            }
            }
        }
        return res;
    }
};