class Solution {
public:
    
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int mi1=INT_MAX;
        int mi2=INT_MAX;
        long long cnt=0,sum=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<=0) {
                    cnt++; 
                    mi1=min(mi1,abs(matrix[i][j]));
                }
                else{
                    mi2=min(mi2,abs(matrix[i][j]));
                }
                
                sum+=abs(matrix[i][j]);
            }
        }
       
        if(cnt%2==1){
            if(mi1<mi2){
                
                return sum-(2*mi1);
            }
            else{
               
                return sum-2*mi2;
            }
        }
        return sum;
    }
};