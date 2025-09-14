class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int res=INT_MAX;
        for(int i=0;i<tasks.size();i++){
            res=min(res,tasks[i][0]+tasks[i][1]);
        }
        return res;
    }
};