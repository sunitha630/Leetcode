class Solution {
public:
    bool isPalindrome(string s) {
        //ignore spaces
        //ignore special characters
        //ignore uppercase/lowercase difference -->a == A 
        //palindrome 
        //s="A man, a plan, a canal: Panama";
              
        string temp="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                temp+=tolower(s[i]);  
            }
        }
        //temp=amanaplanacanalpanama //palindrome
         //temp=raceacar
        int left=0,right=temp.size()-1;
        while(left<right){
            if(temp[left]!=temp[right]){
                return false; 
            }
            left++;
            right--;
        }
        return true;
       
    }
};