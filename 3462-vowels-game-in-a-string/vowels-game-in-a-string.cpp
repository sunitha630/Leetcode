class Solution {
public:
    bool doesAliceWin(string s) {
        int even=0,odd=0;
        int c=0,flag=true;
       for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            c++;
        }
        else{
            if(c%2==0 && c!=0){
                even++;
            }
            else if(c!=0){
                odd++;
            }
            c=0;
        }
       }
       if(c%2==0 && c!=0){
                even++;
            }
            else if(c!=0){
                odd++;
            }

       if(even==0 && odd==0) return false;
       return true;
    }
};