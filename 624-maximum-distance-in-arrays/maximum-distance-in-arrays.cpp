class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int val=INT_MIN;
        sort(arrays.begin(),arrays.end());
        int mi=arrays[0][0];
        for(int i=1;i<arrays.size();i++){
            int n=arrays[i].size();
            val=max(val,arrays[i][n-1]-mi);
            mi=min(mi,arrays[i][0]);
        }
        int ma=arrays[0][arrays[0].size()-1];
         for(int i=1;i<arrays.size();i++){
            int n=arrays[i].size();
            val=max(val,ma-arrays[i][0]);
            ma=min(ma,arrays[i][n-1]);
        }
        return val;
    }
};