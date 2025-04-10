class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
      
       map<int,int>mp;
       map<int,int>::iterator it;
       if(n==1 &&trust.size()==0) return 1;
       int res=-1,flag=true;
       for(int i=0;i<trust.size();i++){
            mp[trust[i][1]]++; 
       } 
       for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
       }
       for(it=mp.begin();it!=mp.end();it++){
        if(it->second==n-1){
            if(flag==false) return -1;
            res=it->first;
            flag=false;
        }
       }
       if(res==-1) return res;
       for(int i=0;i<trust.size();i++){
            if(trust[i][0]==res) return -1;
       }
       return res;
       
    }
};