class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mi=INT_MAX;
        int res=-1;
        for(int i=0;i<drones.size();i++){
            // cout<<(abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]))<<endl;
            if((abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]))<=drones[i][2]){
                
               if(mi>(abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]))){
                mi=(abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]));
                res=i;
               }
            }
            
        }
        return res;
    }
};