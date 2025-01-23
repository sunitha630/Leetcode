class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size()<=10){
        return {};
      }
      unordered_map<string,int>mp;
      unordered_map<string,int>::iterator it;
      
      string ss="";
      for(int i=0;i<10;i++){
        ss+=s[i];
      }
      mp[ss]++;
      vector<string>res;
      for(int i=1;i<s.size()-9+1;i++){
        ss.erase(ss.begin());
        ss+=s[i+9];
        mp[ss]++;
      }
       for(it=mp.begin();it!=mp.end();it++){
        if(it->second>1){
            res.push_back(it->first);
        }
       }
       return res;
    }
};