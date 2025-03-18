class Solution {
public:
    bool fun(string &w1,string &w2,string &w3,int i,int j,int k,vector<vector<int>>&dp){
       if(i>=w1.size() && j>=w2.size()) return true;
       if(dp[i][j]!=-1) return dp[i][j];
       bool ans=false;
      
       if(j<w2.size() && w2[j]==w3[k]){
         ans=ans|fun(w1,w2,w3,i,j+1,k+1,dp);
       }
       if(i<w1.size() && w1[i]==w3[k]){
         ans=ans|fun(w1,w2,w3,i+1,j,k+1,dp);
       }
       dp[i][j]=ans;
       return dp[i][j];
       
    }
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        if(s1.size()+s2.size()!=s3.size()) return false;
        return fun(s1,s2,s3,0,0,0,dp);

    }
};