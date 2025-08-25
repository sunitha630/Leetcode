class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>vec;
        for(auto &it:mp){
            if(it.first%2==0){
                for(int i=it.second.size()-1;i>=0;i--)
                    vec.push_back(it.second[i]);
            }
            else{
                for(int i=0;i<it.second.size();i++)
                    vec.push_back(it.second[i]);
            }
        }
        return vec;
    }
};