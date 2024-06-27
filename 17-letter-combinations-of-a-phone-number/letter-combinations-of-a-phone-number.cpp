class Solution {
public:
    unordered_map<char,string>mp;
    void recurse(string digits,int index,string dummy,vector<string>&res){
        if(index==digits.size()){
            res.push_back(dummy);
            return;
        }
        for(char ch:mp[digits[index]]){
            recurse(digits,index+1,dummy+ch,res);
        }
    }
    vector<string> letterCombinations(string digits) {
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string>res;
        if(digits.size()==0) return {};
        recurse(digits,0,"",res);
        return res;
    }
};