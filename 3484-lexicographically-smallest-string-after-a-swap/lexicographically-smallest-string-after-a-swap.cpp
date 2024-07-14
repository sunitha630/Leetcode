class Solution {
public:
    string getSmallestString(string s) {
       for(int i=0;i<s.size()-1;i++){
        if(s[i]-'0'>s[i+1]-'0'){
            int num1=stoi(string(1,s[i]));
            int num2=stoi(string(1,s[i+1]));
           if(num1%2==0 && num2%2==0 || num1%2!=0 && num2%2!=0){
            swap(s[i],s[i+1]);
            break;
           } 
        }
       } 
        return s;
    }
   
};