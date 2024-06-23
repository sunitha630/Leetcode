class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int minc=1000,maxc=0,maxr=0,minr=1000;
        bool flagc=false;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    minc=min(minc,j);
                    minr=min(minr,i);
                    maxc=max(maxc,j);
                    maxr=max(maxr,i);
                }
            }
        }
        return (maxr-minr+1)*(maxc-minc+1);
    }
};