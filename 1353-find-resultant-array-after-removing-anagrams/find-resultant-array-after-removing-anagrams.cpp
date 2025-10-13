class Solution {
public:
    bool isAnagram(string str1,string str2){
        if(str1.size()!=str2.size()) return false;
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        for(int i=0;i<str1.size();i++){
            if(str1[i]!=str2[i]) return false;
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>res;
       for(int i=1;i<words.size();){
        if(isAnagram(words[i],words[i-1])){
           words.erase(words.begin()+i);
        }
        else
        {
            i++;
        }
       }
    return words;
    }
};