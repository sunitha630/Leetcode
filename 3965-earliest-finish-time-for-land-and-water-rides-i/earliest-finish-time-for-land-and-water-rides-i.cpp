class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
      int min1=INT_MAX;
      for(int i=0;i<landStartTime.size();i++){
        int k=landStartTime[i]+landDuration[i];
        for(int j=0;j<waterStartTime.size();j++){
            if(k>=waterStartTime[j]){
                min1=min(min1,k+waterDuration[j]);
            }
            else{
                min1=min(min1,waterStartTime[j]+waterDuration[j]);
            }
        }
      }
      for(int i=0;i<waterStartTime.size();i++){
        int k=waterStartTime[i]+waterDuration[i];
        for(int j=0;j<landStartTime.size();j++){
            if(k>=landStartTime[j]){
                min1=min(min1,k+landDuration[j]);
            }
            else{
                min1=min(min1,landStartTime[j]+landDuration[j]);
            }
        }
      }
      return min1;
    }
};