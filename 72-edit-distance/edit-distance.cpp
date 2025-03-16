class Solution {
public:
    int edit(string &w1,string &w2,int i,int j,vector<vector<int>>&dp){
        if(i>=w1.size()) return w2.size()-j;
        if(j>=w2.size()) return w1.size()-i;
        if(dp[i][j]!=-1) return dp[i][j];
        if(w1[i]==w2[j]){
            dp[i][j]=0+edit(w1,w2,i+1,j+1,dp);

        }
        else{
            int replace=1+edit(w1,w2,i+1,j+1,dp);
            int insert=1+edit(w1,w2,i+1,j,dp);
            int del=1+edit(w1,w2,i,j+1,dp);
            dp[i][j]=min({replace,del,insert});
        }
        return dp[i][j];
    }
    int minDistance(string word1, string word2) {
       vector<vector<int>>dp(word1.size(),vector<int>(word2.size(),-1));
       
     return edit(word1,word2,0,0,dp);
     
    

    }
};