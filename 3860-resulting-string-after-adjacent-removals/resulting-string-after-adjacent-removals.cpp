class Solution {
public:
    string resultingString(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                int i1=s[i]-'a';
                int i2=st.top()-'a';
               if(( (i2 - i1 + 26) % 26 == 1 ) || ( (i1 - i2 + 26) % 26 == 1 )) {
                st.pop();
               }
               else{
                st.push(s[i]);
               }
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