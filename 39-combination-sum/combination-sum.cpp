class Solution {
public:
    void combinations(vector<int>v,int index,int size,int tar,int sum,vector<vector<int>>&res,vector<int>ans){
        if(index >= size && sum != tar){
            return;
        }
        else if(sum==tar){
            res.push_back(ans);
            return;
        }
        else if(sum>tar){
            return;
        }
        sum+=v[index];
        ans.push_back(v[index]);
        combinations(v,index,size,tar,sum,res,ans);
        sum-=v[index];
        ans.pop_back();
        combinations(v,index+1,size,tar,sum,res,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        sort(candidates.begin(),candidates.end());
        combinations(candidates,0,candidates.size(),target,0,res,{});
        return res;
            }
};