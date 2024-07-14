class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string dummy = ""; 
        for (char ch : s) {
            if (ch == '(') {
                st.push(dummy);
                dummy = "";
            } else if (ch == ')') {
                reverse(dummy.begin(), dummy.end());
                if (!st.empty()) {
                    dummy = st.top() + dummy;
                    st.pop();
                }
            } else {
                dummy += ch;
            }
        }
        
        return dummy;
    }
};
