class Solution {
public:
    bool check2(vector<vector<char>>& board,int r,int c){
        map<int,int>mp3;
        for(int i=r;i<r+3;i++){
            for(int j=c;j<c+3;j++){
                mp3[board[i][j]-'a']++;
            }
        }
         for(auto it:mp3){
            if(it.second>1  && it.first!='.'-'a') return false;
        }
        return true;
    }
    bool check(vector<vector<char>>& board,int r,int c){
       map<int,int>mp1;
       map<int,int>mp2;
       
        for(int i=0;i<9;i++){
           
            mp1[board[r][i]-'a']++;
        }
        for(int i=0;i<9;i++){
             
            mp2[board[i][c]-'a']++;
        }
        
        for(auto it:mp1){
            if(it.second>1 && it.first!='.'-'a') {
                return false;
            }
        }
         for(auto it:mp2){
            if(it.second>1  && it.first!='.'-'a') return false;
        }
         
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<board.size();i++){
           for(int j=0;j<board[i].size();j++){
             if(i%3==0 && j%3==0){
                if(!check2(board,i,j) || !check(board,i,j)){
                    return false;
                }
             }
             else{
                if(!check(board,i,j)){
                    return false;
                }
             }
           }
        }
        return true;
    }
};