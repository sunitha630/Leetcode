class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.size();
        vector<int>first(26,-1);
        vector<int>second(26);
        for(int i=0;i<n;i++){
            if(first[s[i]-97]==-1){
                first[s[i]-97]=i;
            }
            second[s[i]-97]=i;
        }
        int res=0;
        for(int i=0;i<26;i++){
            map<char,int>mp;
            for(int j=first[i]+1;j<second[i];j++){
                mp[s[j]]++;
            }
            res+=mp.size();
        }
        return res;
    }
};