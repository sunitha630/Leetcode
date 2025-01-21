class Solution {
public:
    int numRabbits(vector<int>& answers) {
      unordered_map<int,int>mp;
      unordered_map<int,int>::iterator it;
      for(int i=0;i<answers.size();i++){
        mp[answers[i]]++;
      }  
      int res=0;
      for(it=mp.begin();it!=mp.end();it++){
        int val=it->first+1;
        int freq=it->second;
        int quo=freq/val;
        int rem=freq%val;
        cout<<val<<" "<<quo<<" "<<rem<<endl;
        if(quo==0){
            res+=val;
        }
        else if(rem==0){
            res+=(val*quo);
        }
        else{
            res+=(val*quo)+(val);
        }
      }
      return res;
    }
};