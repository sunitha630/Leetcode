class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        //start of first interval
        int low=intervals[0][0];
        //end of the first interval
        int high=intervals[0][1];
        vector<vector<int>>res;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=high){
                high=max(high,intervals[i][1]);
            }
            else{
                res.push_back({low,high});
                low=intervals[i][0];
                high=intervals[i][1];
            }
        }
        res.push_back({low,high});
        return res;

    }
};