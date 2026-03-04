class Solution {
public:
    bool funTrue(vector<vector<int>>&mat,int row,int col){
        int m=mat.size(),n=mat[0].size();
        cout<<row<<" "<<col<<endl;
        for(int i=0;i<n;i++){
            if(i!=col && mat[row][i]){
                return false;
            }
        }
        for(int i=0;i<m;i++){
            if(i!=row && mat[i][col]){
                return false;
            }
        }
      
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
      int cnt=0;
      int m=mat.size(),n=mat[0].size();
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j] && funTrue(mat,i,j)) cnt++;
        }
      }
      return cnt;  
    }
};