class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i=0,j=0;
        string res="";
        int length=s.size()+spaces.size();
        while(length--){
            if(j<spaces.size() && i==spaces[j]){
                res+=' ';
                j++;
            }
            else{
                res+=s[i];
                i++;
            }
        }
        return res;

    }
};