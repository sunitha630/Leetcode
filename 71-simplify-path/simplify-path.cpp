class Solution {
public:
    string simplifyPath(string path) {
       if(path=="") return "";
        vector<string>st;
        string str="";
        int dot=0;
        for(int i=0;i<path.size();i++){
            if(path[i]=='.'){
                dot++;
                str+=path[i];
            }
            else if(path[i]=='/'){
               if (!str.empty()) {
            if (dot==1 && str==".") {
            }
            else if (dot==2 && str=="..") {
                if (!st.empty()) {
                    st.pop_back();
                }
            }
            else {
                st.push_back(str);
            }
            str = "";
                dot = 0;
            }
            }
            else{
                dot=0;
                str+=path[i];
            }
        }
       if (!str.empty()) {
            if (dot==1 && str == ".") {
            }
            else if (dot== 2 && str == "..") {
                if (!st.empty()) {
                    st.pop_back();
                }
            }
            else {
                st.push_back(str);
            }
        }
        
        if(st.size()==0 && path.size()!=0){
            return "/";
        }
        string res="";

        for(int i=0;i<st.size();i++){
            res+="/";
            res+=st[i];
        }
        
        return res;
    }
};