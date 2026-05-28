class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int>mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        int cnt=0;
        for(int i='A';i<='Z';i++){
            if(mp.find(i)!=mp.end()){
                if(mp.find(i+32)!=mp.end()){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};