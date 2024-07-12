class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int res=0;
        stack<int>st;
        if(x>y){
        for(int i=0;i<s.size();i++){
          if(st.size()==0){
            st.push(s[i]);
          }
          else if(st.top()=='a' && s[i]=='b'){
            st.pop();
            res+=x;
          }
          else{
            st.push(s[i]);
          }
        }
        string s2="";
        while(!st.empty()){
            s2+=st.top();
            st.pop();
        }
        reverse(s2.begin(),s2.end());
        for(int i=0;i<s2.size();i++){
          if(st.size()==0){
            st.push(s2[i]);
          }
          else if(st.top()=='b' && s2[i]=='a'){
            st.pop();
            res+=y;
          }
          else{
            st.push(s2[i]);
          }
        }
        }
        else{
            for(int i=0;i<s.size();i++){
          if(st.size()==0){
            st.push(s[i]);
          }
          else if(st.top()=='b' && s[i]=='a'){
            st.pop();
            res+=y;
          }
          else{
            st.push(s[i]);
          }
        }
        string s2="";
        while(!st.empty()){
            s2+=st.top();
            st.pop();
        }
        reverse(s2.begin(),s2.end());
        for(int i=0;i<s2.size();i++){
          if(st.size()==0){
            st.push(s2[i]);
          }
          else if(st.top()=='a' && s2[i]=='b'){
            st.pop();
            res+=x;
          }
          else{
            st.push(s2[i]);
          }
        }
        }
        return res;

    }
};