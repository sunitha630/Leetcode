class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            return true;
        }
        return false;
    }
   
    bool isValid(string word) {
       int c1=0,c2=0;
       if(word.size()<=2){
        return false;
       }
       else{
        for(int i=0;i<word.size();i++){
            if((word[i]>='A' && word[i]<='Z') || (word[i]>='a' && word[i]<='z') || (word[i]>='0' && word[i]<='9')){
                if(isvowel(word[i])){
                    c1++;
                }
                else if(!isvowel(word[i]) && !(word[i]>='0' && word[i]<='9')){
                    c2++;
                }
            }
            else{
                return false;
            }
        }
        if(c1>=1 && c2>=1){
            
            return true;
        }

       }
       return false;
    }
};