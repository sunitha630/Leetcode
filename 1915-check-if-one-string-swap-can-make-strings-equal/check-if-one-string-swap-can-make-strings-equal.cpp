class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int cnt=0;
        if(s1.size()!=s2.size()) return false;
        char first=' ',second=' ',third=' ',fourth=' ';
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                cnt++;
                if(cnt==1){
                    first=s1[i];
                    third=s2[i];
                }
                if(cnt==2){
                    second=s1[i];
                    fourth=s2[i];
                }
               
            }
        }
        if(cnt==2 || cnt==0) {
            if(first==fourth && second==third)
            return true;
           
        }
        return false;
    }
};