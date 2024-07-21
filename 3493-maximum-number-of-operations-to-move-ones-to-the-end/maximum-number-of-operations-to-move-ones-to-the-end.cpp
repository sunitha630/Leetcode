class Solution {
public:
    int maxOperations(string s) {
        int c=0;
        bool flag=false;
        int cc=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
               flag=true;
                cc++;
            }
            if(s[i]=='0' && flag==true){
                flag=false;
                c+=cc;

            }
        }
       return c;
    }
};