class Solution {
public:
    int minimumChairs(string s) {
        int m=0;
        int c=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='E'){
            c++;
            if(m<c){
                m=c;
            }
        }else{
            c--;
            if(m<c){
                m=c;
            }
        }
       }
       
            return m;
    }
};