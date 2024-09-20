class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        long long res=0;
        vector<int>vec1;
        vector<int>vec2;
        for(int i=0;i<grid.size();i++){
            int cnt=0;
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    cnt++;
                }
            }
            vec1.push_back(cnt);
        }
       for(int j=0;j<grid[0].size();j++){
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            if(grid[i][j]){
                cnt++;
            }
        }
        vec2.push_back(cnt);
       }
       
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]){
            res+=((vec1[i]-1)*(vec2[j]-1));
            }
        }
       }
       return res;
    }
};