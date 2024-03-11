class Solution {
public:
    string customSortString(string order, string s) {
      map<char,int>mp;
      map<char,int>::iterator it;
      string res="";
      for(int i=0;i<s.size();i++){
          mp[s[i]]++;
      }  
      for(int i=0;i<order.size();i++){
          while(mp[order[i]]){
              res+=order[i];
              mp[order[i]]--;
          }
          //mp[order[i]]=0;
      }
      for(int i=0;i<s.size();i++){
          if(mp[s[i]]!=0){
              res+=s[i];
          }
      }
      return res;


    }
};