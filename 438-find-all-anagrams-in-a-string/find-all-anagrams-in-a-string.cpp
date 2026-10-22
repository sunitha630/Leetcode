class Solution {
public:
    bool check(map<char,int>&mp,map<char,int>&mp1){
        return mp==mp1;
    }
    vector<int> findAnagrams(string s, string p) {
        map<char,int>mp;
        vector<int>res;
        for(int i=0;i<p.size();i++){
            mp[p[i]]++;
        }
        map<char,int>mp2;
        int i=0;
        for(i=0;i<p.size();i++){
            mp2[s[i]]++;
        }
        int k=0;
        if(check(mp,mp2)) res.push_back(0);
        for(int j=i;j<s.size();j++){
            mp2[s[k]]--;
            if (mp2[s[k]] == 0) mp2.erase(s[k]);
            k++;
            mp2[s[j]]++;
            if(check(mp,mp2)) res.push_back(k);
        }
        return res;
    }
};