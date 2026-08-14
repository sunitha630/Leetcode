class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0,j=0;
        int ma=0;
        while(j<s.size()){
            mp[s[j]]++;  
            if(mp[s[j]]<=2){
                ma=max(ma,j-i+1);
            }
            else{
                while(mp[s[j]]>2){
                    if(mp[s[i]]==1) mp.erase(s[i]);
                    else mp[s[i]]--;
                    i++;
                }
            }
            j++;
        }
        
        return ma;
    }
};