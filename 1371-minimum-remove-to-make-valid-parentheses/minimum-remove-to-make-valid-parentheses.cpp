class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                st.push(s[i]);
            }
            else if(s[i]==')' && count>0){
                count--;
                st.push(s[i]);
            }
            else if(s[i]!=')'){
                st.push(s[i]);
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        string res2="";
        for(int i=0;i<res.size();i++){
            if(count>0 && res[i]=='('){
                count--;
            }
            else{
                res2+=res[i];
            }
        }
        reverse(res2.begin(),res2.end());
        return res2;
    }
};