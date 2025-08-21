class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>>mat(matrix.size(),vector<int>(matrix[0].size(),0));
        int m=matrix.size(),n=matrix[0].size();
        int res=0;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]=='0') mat[i][0]=0;
            else mat[i][0]=1;
             res=max(res,mat[i][0]);
        }
         for(int i=0;i<matrix[0].size();i++){
            if(matrix[0][i]=='0') mat[0][i]=0;
            else mat[0][i]=1;
            res=max(res,mat[0][i]);
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[i].size();j++){
                if(matrix[i][j]=='0'){
                    mat[i][j]=0;
                }
                else{
                    int k=min({mat[i-1][j],mat[i][j-1],mat[i-1][j-1]});
                    mat[i][j]=k+1;
                   
                }
                res=max(res,mat[i][j]);
            }
        }
        return res*res;
    }
};