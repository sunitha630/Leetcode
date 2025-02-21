class Solution {
public:
    int count(vector<vector<int>>& board,int i,int j,int m,int n){
        int cnt=0;
        if(i-1>=0 && j-1>=0 && board[i-1][j-1]==1){
            cnt++;
        }
        if(i-1>=0 && board[i-1][j]==1){
            cnt++;
        }
        if(i-1>=0 && j+1<n && board[i-1][j+1]==1){
            cnt++;
        }
        if(j-1>=0 && board[i][j-1]==1){
            cnt++;
        }
        if (j+1<n && board[i][j+1]==1){
            cnt++;
        }
        if(i+1<m && j-1>=0 && board[i+1][j-1]==1){
            cnt++;
        }
        if(i+1<m  && board[i+1][j]==1){
            cnt++;
        }
        if(i+1<m && j+1<n && board[i+1][j+1]==1){
            cnt++;
        }
        return cnt;

        
    }
    void gameOfLife(vector<vector<int>>& board) {
        
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>res(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    int cnt=count(board,i,j,m,n);
                    if(cnt<2 || cnt > 3){
                        res[i][j]=0;
                    }
                    else if(cnt==2 || cnt==3){
                        res[i][j]=1;
                    }
                }
                else{
                    
                    int cnt=count(board,i,j,m,n);
                    if(cnt==3){
                        res[i][j]=1;
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                board[i][j]=res[i][j];
            }
        }
    }
};