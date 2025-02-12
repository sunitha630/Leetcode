class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int left=0,right=0;
        int n=s.size(),res=0;
        while(right<n){
            if(mp.find(s[right])==mp.end()){
                res=max(res,right - left + 1);
                mp[s[right]]++;
                right++;
            }
            else{
                mp.erase(s[left]);
                left++;
            }
        }
        return res;
    }
};