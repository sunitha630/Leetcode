class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> vec(triangle.size());
        for (int i = 0; i < triangle.size(); i++) {
            vec[i].resize(i + 1);
        }
        vec[0][0]=triangle[0][0];
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    vec[i][j]=vec[i-1][j]+triangle[i][j];
                }
                else if(j==i){
                    vec[i][j]=vec[i-1][j-1]+triangle[i][j];
                }
                else{
                    vec[i][j]=min(vec[i-1][j-1]+triangle[i][j],vec[i-1][j]+triangle[i][j]);
                }
            }
        }
        return *min_element(vec[triangle.size() - 1].begin(), vec[triangle.size() - 1].end());
        
    }

};