class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<=j){
           if(isvowel(s[i])&& isvowel(s[j])){
            swap(s[i],s[j]);
            i++;
            j--;
           }
           else if(!isvowel(s[i]) && isvowel(s[j])){
            i++;
           }
           else if(isvowel(s[i]) && !isvowel(s[j])){
            j--;
           }
           else{
            i++;
            j--;
           }
        }
        return s;
    }
};