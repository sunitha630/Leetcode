class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        bool flag=false;
        int cnt=0;
        for(auto it:mp){
            if(it.second & 1){
            cnt+=(it.second-1);
            flag=true;
            }
            else if(!(it.second & 1)){
                cnt+=(it.second);
            }
          
        }
        if(flag) cnt++;
        return cnt;
    }
};