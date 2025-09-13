class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int vowel=0,conso=0;
        vowel=max(mp['a'],vowel);
        vowel=max(mp['e'],vowel);
        vowel=max(mp['i'],vowel);
        vowel=max(mp['o'],vowel);
        vowel=max(mp['u'],vowel);
        for(auto &it:mp){
            if(it.first!='a' && it.first!='e' && it.first!='i' && it.first!='o' && it.first!='u')
            conso=max(it.second,conso);
        }
        return conso+vowel;
    }
};