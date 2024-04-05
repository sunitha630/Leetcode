class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        if(s.size()==1) return s;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top()==tolower(st.top()) && toupper(st.top())==s[i] || st.top()==toupper(st.top()) && tolower(st.top())==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};