class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0,j=0;
        while(j<str2.length()){
            if(i>=str1.length()){
                return false;
                break;
            }
            if(str1[i]==str2[j] || (str1[i] + 1) % 26 == str2[j] % 26){
                i++;
                j++;
            }
            else{
                i++;
            }

        }
        return true;
    }
};