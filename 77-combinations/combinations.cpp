class Solution {
public:
    void combinations(vector<int>&ans,vector<vector<int>>&res,int n,int k,int ind){
        if(k==ans.size()){
            res.push_back(ans);
            return;
        }
        if(ind>n){
            return;
        }
        ans.push_back(ind);
        combinations(ans,res,n,k,ind+1);
        ans.pop_back();
        combinations(ans,res,n,k,ind+1);
    }
    vector<vector<int>> combine(int n, int k) {
       vector<vector<int>>res;
       vector<int>ans;
       combinations(ans,res,n,k,1);
       return res;

    }
};