class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int>time(dist.size());
        for(int i=0;i<dist.size();i++){
            if(dist[i]<speed[i]) time[i]=1;
            else if(dist[i]%speed[i]==0){
            time[i]=(dist[i]/speed[i]);
            }
            else{
                time[i]=(dist[i]/speed[i])+1;
            }

        }
        sort(time.begin(),time.end());
        int cnt=0;
        // for(int i=0;i<time.size();i++){
        //     cout<<time[i]<<" ";
        // }
        for(int i=0;i<time.size();i++){
            if(time[i]<i+1) {
                return cnt;
            }else{
                cnt++;
            }
        }
        return cnt;
    }
};