class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        vector<vector<int>>dumb;
        for(int i=0;i<triplets.size();i++){
            if(triplets[i][0]<=target[0] && triplets[i][1]<=target[1] && triplets[i][2]<=target[2]){
                dumb.push_back(triplets[i]);
            }
        }
        int v1=-1,v2=-1,v3=-1;
        for(int i=0;i<dumb.size();i++){
            if(dumb[i][0]==target[0]){
                v1=1;
            }
            if(dumb[i][1]==target[1]){
                v2=1;
            }
            if(dumb[i][2]==target[2]){
                v3=1;
            }
        }
        if(v1==-1 || v2==-1 || v3==-1) return false;
        return true;
    }
};