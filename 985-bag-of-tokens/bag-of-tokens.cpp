class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        int m=0;
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        if(tokens.size()==1){
            if(tokens[0]>power){
                return 0;
            }
            return 1;
        }
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i];
                score++;
                 m=max(score,m);
                i++;
            }
            else{
                if(score!=0){
                power+=tokens[j];
                score--;
                m=max(score,m);
                }
                j--;
            }
        }
        return m;

    }
};