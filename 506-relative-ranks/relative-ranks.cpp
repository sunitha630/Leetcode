class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int>mp;
        map<int,int>::iterator it;
        for(int i=0;i<score.size();i++){
            mp[score[i]]=i;
        }
        sort(score.rbegin(),score.rend());
        vector<string>res(score.size());
        for(int i=0;i<score.size();i++){
           int ind=mp[score[i]];
          if(i==0){
            res[ind]="Gold Medal";
          }
          else if(i==1){
            res[ind]="Silver Medal";
          }
          else if(i==2){
            res[ind]="Bronze Medal";
          }
          else{

            res[ind]=to_string(i+1);
          }
        }
        return res;
    }
};