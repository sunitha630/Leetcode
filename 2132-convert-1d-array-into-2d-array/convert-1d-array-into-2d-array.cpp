class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>res;
        if(m*n!=original.size())
        {
            return res;
        }
        vector<int>dummy;
        for(int i=0;i<m*n;i++){
            dummy.push_back(original[i]);
            if(dummy.size()==n){
                res.push_back(dummy);
                dummy.clear();
            }
        }
        return res;
    }
};