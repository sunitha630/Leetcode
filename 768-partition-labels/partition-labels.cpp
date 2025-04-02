class Solution {
public:
    vector<int> partitionLabels(string s) {
       
       map<char,int>mp;
       map<char,int>::iterator it;
       for(int i=0;i<s.size();i++){
        mp[s[i]]=i;
       }
       vector<int>vec;
       int start=0,end=mp[s[start]];
       int dum_end=mp[s[start]];
       while(end<s.size()){
         for(int i=start;i<end;i++){
            if(mp[s[i]]>end){
                end=mp[s[i]];
            }
         }
         vec.push_back(end-start+1);
         start=end+1;
         end=max(end,mp[s[start]]);
         if(start>=s.size() || end>=s.size()){
            break;
         }
       }
    return vec;
      
       
    }
};