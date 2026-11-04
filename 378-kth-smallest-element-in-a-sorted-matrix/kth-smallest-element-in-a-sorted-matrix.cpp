class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        map<int,int>mp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                mp[matrix[i][j]]++;
            }
        }
        for(auto it:mp){
            k-=it.second;
            if(k<=0) return it.first;
        }
        return -1;
    }
};