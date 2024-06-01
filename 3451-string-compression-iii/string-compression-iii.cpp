class Solution {
public:
    string compressedString(string word) {
        int n=word.size();
        char a=word[0];
        int i=0;
        string res="";
        int count=0;
        while(i<n){
            if(a==word[i] && count<9){
                count++;
                i++;
            }
            else{
                res+=to_string(count);
                res+=a;
                a=word[i];
                count=0;
            }
        }
        res+=to_string(count);
        res+=a;


        return res;
    }
};