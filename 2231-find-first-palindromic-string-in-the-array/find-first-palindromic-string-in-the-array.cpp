class Solution {
public:
    bool is_pal(string s){
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(is_pal(words[i])){
                return words[i];
            }
        }
        return "";
    }
};