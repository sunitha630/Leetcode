class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int low=points[0][0];
        int high=points[0][1];
        int arrows_cnt=1;
        for(int i=1;i<points.size();i++){
            //overlap
            if(points[i][0]<=high){
                low=max(low,points[i][0]);
                high=min(high,points[i][1]);
            }
            //non-overlap
            else{
                arrows_cnt++;
                low=points[i][0];
                high=points[i][1];
            }
        }
        return arrows_cnt;
    }
};