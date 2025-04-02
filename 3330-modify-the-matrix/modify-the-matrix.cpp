class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int>maxi(matrix[0].size());
        for(int i=0;i<matrix[0].size();i++){
            int ma=INT_MIN;
            for(int j=0;j<matrix.size();j++){
                ma=max(ma,matrix[j][i]);
            }
            maxi[i]=ma;
        }
        for(int i=0;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                if(matrix[j][i]==-1){
                    matrix[j][i]=maxi[i];
                }
            }
        }
        return matrix;
    }
};