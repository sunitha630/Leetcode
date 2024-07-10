class Solution {
public:
    int minOperations(vector<string>& logs) {
     int cnt=0;
     for(int i=0;i<logs.size();i++){
        if(logs[i]=="../" && cnt>0){
            cnt--;
        }
        else if(logs[i]!="./" && logs[i]!="../"){
            cnt++;
        }
     }
     if(cnt<0) return 0;
     return cnt;   
    }
};