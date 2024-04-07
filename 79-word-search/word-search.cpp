class Solution {
public:
    bool  flag=false;
    void fun(string word,vector<vector<char>>&board,int index,int i,int j,int m,int n,vector<vector<bool>>&visited){
        if(index==word.size()){
            flag=true;
            return;
        }
        else if(i<0 || j<0 || i>=m || j>=n || visited[i][j] || board[i][j]!=word[index] ){
            return;
        }
        visited[i][j]=true;
        fun(word,board,index+1,i,j+1,m,n,visited);
        fun(word,board,index+1,i+1,j,m,n,visited);
        fun(word,board,index+1,i-1,j,m,n,visited);
        fun(word,board,index+1,i,j-1,m,n,visited);
        visited[i][j]=false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>>visited(m, vector<bool>(n, false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                fun(word,board,0,i,j,m,n,visited);
                if(flag){
                    return true;
                }
            }
        }
        return false;
    }
};