class Solution {
public:
    /*void unique(int m,int n,int i,int j,vector<vector<int>>&v){
        if(i>=m || j>=n){
            return;
        }
        v[i][j]=v[i-1][j]+v[i][j-1];
        unique(m,n,i,j+1,v);
        unique(m,n,i+1,j,v);
    }*/
    int uniquePaths(int m, int n) {
          int i=1,j=1;
          vector<vector<int>>v(m,vector<int>(n,-1));
          for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0){
                    v[i][j]=1;
                }
            }
          }
          for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                v[i][j]=v[i-1][j]+v[i][j-1];
            }
          }
          return v[m-1][n-1];
          
    }
};