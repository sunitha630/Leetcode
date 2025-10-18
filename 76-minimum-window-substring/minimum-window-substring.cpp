class Solution {
public:
     bool check(map<char,int>&mp1,map<char,int>&mp2){
         for(auto it:mp2){ 
            if(mp1.find(it.first)==mp1.end() || it.second>mp1[it.first]){ 
                return false; 
                }
             } 
             return true; 
    }
    string minWindow(string s, string t) {
        if(s.size()<t.size()) return "";
        int l=0,r=0;
        int final_l=0,final_r=0;
        map<char,int>mp1,mp2;
        for(int i=0;i<t.size();i++){
            mp2[t[i]]++;
        }
        
        int ma=INT_MAX;
        while(r<s.size()){
            mp1[s[r]]++;
            r++;
            while(check(mp1,mp2)){
                if (ma > r - l) {
                    ma=r-l;
                    final_l = l;
                    final_r = r;
                }
                mp1[s[l]]--;
                l++;
            }
        }
        if(ma==INT_MAX) return "";
       string res="";
       for(int i=final_l;i<final_r;i++){
        res+=s[i];
       }
       return res;

    }
};