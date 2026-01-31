class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        map<char,int>mp;
        for(int i=0;i<letters.size();i++){
            mp[letters[i]]++;
        }
        for(auto it:mp){
            if(it.first>target){
                return it.first;
            }
        }
        return letters[0];
    }
};