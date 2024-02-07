class Solution {
public:
    void combinations(int ind,int sum,int tar,int size,vector<vector<int>>&res,vector<int>ans){
        if(sum==tar && ans.size()==size){
            res.push_back(ans);
            return;
        }
        if(sum>tar){
            return;
        }
        if(ind>9){
            return;
        }
        sum+=ind;
        ans.push_back(ind);
        combinations(ind+1,sum,tar,size,res,ans);
        sum-=ind;
        ans.pop_back();
        combinations(ind+1,sum,tar,size,res,ans);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        combinations(1,0,n,k,res,{});
        return res;
        
    }
};