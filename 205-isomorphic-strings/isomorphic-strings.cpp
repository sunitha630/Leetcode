class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        unordered_map<char,char>mp2;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=t[i];
            }
            else{
                if(mp[s[i]]!=t[i]){
                    return false;
                }
            }
        }
        for(int i=0;i<s.size();i++){
            if(mp2.find(t[i])==mp2.end()){
                mp2[t[i]]=s[i];
            }
            else{
                if(mp2[t[i]]!=s[i]){
                    return false;
                }
            }
        }

        return true;
    }
};