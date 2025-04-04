class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int>res(cost.size());
        int mi=cost[0];
        res[0]=mi;
        for(int i=1;i<cost.size();i++){
            mi=min(mi,cost[i]);
            res[i]=mi;
        }
        return res;
    }
};