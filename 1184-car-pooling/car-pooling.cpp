class Solution {
public:
    int count(vector<vector<int>>& trip,int ele){
        int sum=0;
        for(int i=0;i<trip.size();i++){
            if(trip[i][1]<=ele){
                sum+=trip[i][2];
            }
        }
        return sum;
    }
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<vector<int>>trip(trips.size(),vector<int>(3));
        for(int i=0;i<trips.size();i++){
            trip[i][0]=trips[i][1];
            trip[i][1]=trips[i][2];
            trip[i][2]=trips[i][0];
        }
        sort(trip.begin(),trip.end());
        int end=trip[0][1];
        if(trip[0][2]>capacity)  return false;
        int cap=trip[0][2];
        for(int i=1;i<trip.size();i++){
            if(trip[i][0]>end){
                cap=0;
            }
            else{
                cap+=trip[i][2];
                int k=count(trip,trip[i][0]);
                if(cap-k > capacity) return false;
            }
            end=max(end,trip[i][1]);
        }
        return true;
    }
};