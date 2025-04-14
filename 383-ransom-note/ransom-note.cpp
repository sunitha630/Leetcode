class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int i=0,j=0;
        while(i<ransomNote.size() && j<magazine.size()){
            if(ransomNote[i]==magazine[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(j==magazine.size() && i!=ransomNote.size()){
           
            return false;
        }
        return true;
    }
};