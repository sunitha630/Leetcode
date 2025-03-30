class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix.size(),0));
        for(int i=0;i<matrix.size();i++){
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                int mi=INT_MAX;
                if(i-1>=0 && j-1>=0){
                    mi=min(mi,dp[i-1][j-1]);
                }
                if(i-1>=0){
                    mi=min(mi,dp[i-1][j]);
                }
                if(i-1>=0 && j+1<matrix.size()){
                    mi=min(mi,dp[i-1][j+1]);
                }
                dp[i][j]=mi+matrix[i][j];
            }

        }
        // for(int i=0;i<dp.size();i++){
        //     for(int j=0;j<dp[0].size();j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int res=INT_MAX;
        for(int i=0;i<dp[0].size();i++){
            res=min(res,dp[matrix.size()-1][i]);
        }
        return res;
    }
};