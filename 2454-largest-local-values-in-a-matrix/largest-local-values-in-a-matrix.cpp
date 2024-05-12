class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>res;
        for(int i=0;i<n-2;i++){
            vector<int>v;
            for(int j=0;j<n-2;j++){
                int max=0;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        if(max<grid[k][l]){
                            max=grid[k][l];
                        }
                    }
                }
                v.push_back(max);
            }
            res.push_back(v);
        }
       
        
         
        return res;
    }
};