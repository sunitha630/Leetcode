class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int i=0,val=0;
        for(auto it:mp){
            if(val==0) val=it.second;
            if(val!=0 && it.second!=val) return false;
        }
        return true;
    }
};