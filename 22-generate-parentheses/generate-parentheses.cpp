class Solution {
public:
    void generate(int n,vector<string>&res,string s,int open,int close){
        if(s.size()==n*2){
            res.push_back(s);
            return;
        }
        if(open<n) {
        generate(n,res,s+"(",open+1,close);
        }
        if(open>close) {
        generate(n,res,s+")",open,close+1);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        if(n==0) return res;
        generate(n,res,"",0,0);
        return res;
    }
};