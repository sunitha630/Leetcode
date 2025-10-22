class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>arr(2052,0);
        for(int i=0;i<logs.size();i++){
            arr[logs[i][0]]+=1;
            arr[logs[i][1]] -=1;
        }
        for(int i=1;i<arr.size();i++){
            arr[i]+=arr[i-1];
        }
        int ma=0,res=-1;
        for(int i=0;i<arr.size();i++){
            if(ma<arr[i]){
               ma=arr[i];
                res=i;
            }
        }
        return res;
    }
};