class Solution {
public:
   vector<string>res;
    void fun(int n,int oc,int cc,string s){
        if(s.size()>=n*2){
            res.push_back(s);
            return;
        }
        else if(oc>cc){
            fun(n,oc,cc+1,s+')');
        }
        if(oc<n) fun(n,oc+1,cc,s+'(');
    }
    vector<string> generateParenthesis(int n) {
        fun(n,1,0,"(");
        return res;
    }
};