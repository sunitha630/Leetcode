class Solution {
public:
    bool is_pal(string s){
        if(s=="") return false;
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    void recurse(string &s,int n,vector<vector<string>>&res,vector<string>vec,string str,int start){
        if(start>=n){
            if(is_pal(str)){
                vec.push_back(str);
            res.push_back(vec);
            }
            return;
        }
        str+=s[start];
        if(is_pal(str)){
            vec.push_back(str);
            recurse(s,n,res,vec,"",start+1);
            vec.pop_back();
        }
        recurse(s,n,res,vec,str,start+1);
       
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>vec;
        recurse(s,s.size(),res,vec,"",0);
        return res;
    }
};                                                        