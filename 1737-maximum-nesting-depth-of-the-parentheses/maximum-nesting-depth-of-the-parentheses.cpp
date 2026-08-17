class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,ma=0;
        for(char ch:s){
            if(ch=='('){
                cnt++;
                ma=max(ma,cnt);
            }
            if(ch==')'){
                cnt--;
            }
        }
        return ma;
    }
};