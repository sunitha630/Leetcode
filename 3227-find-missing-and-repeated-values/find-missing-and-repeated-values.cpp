class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                mp[grid[i][j]]++;
            }
        }
        vector<int>res;
        for(int i=1;i<=grid.size()*grid.size();i++){
            if(mp.find(i)==mp.end() ){
                res.push_back(i);
            }
        }
        for(int i=1;i<=grid.size()*grid.size();i++){
            if(mp[i]>1){
                res.push_back(i);
            }
        }
        
         reverse(res.begin(),res.end());
        return res;
    }
};