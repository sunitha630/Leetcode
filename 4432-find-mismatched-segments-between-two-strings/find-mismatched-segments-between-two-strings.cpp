class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n=s1.size();
        vector<vector<string>>res;
        string e1="",e2="";
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                if(e1!="" && e2!=""){
                    res.push_back({e1,e2});
                }
                e1="";
                e2="";
            }
            else{
                e1+=s1[i];
                e2+=s2[i];
            }
        }
                        if(e1!="" && e2!=""){
                    res.push_back({e1,e2});
                }
        return res;
    }
};