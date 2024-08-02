class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt=0;
        if(s.size()<3) return 0;
       map<char,int>mp; 
       for(int i=0;i<3;i++){
        mp[s[i]]++;
       }
       if(mp.size()==3) cnt++;
       for(int i=1;i<s.size()-2;i++){
      
        mp[s[i-1]]--;
        if(mp[s[i-1]]==0){
           
            mp.erase(s[i-1]);
        }
       
        mp[s[i+2]]++;
         if(mp.size()==3) {
            cnt++;
         }
       }
       return cnt;
    }
};