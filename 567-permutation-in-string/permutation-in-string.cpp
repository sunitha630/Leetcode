class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
       int k=s1.size();
        sort(s1.begin(),s1.end());
        for(int i=0;i<s2.size()-k+1;i++){
           string s="";
            for(int j=i;j<i+k;j++){
               s+=s2[j];
            }
            sort(s.begin(),s.end());
            if(s==s1){
                return true;
            }
        }
        return false;
    }
};