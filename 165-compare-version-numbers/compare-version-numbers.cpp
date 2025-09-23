class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>v1;
        vector<int>v2;
        string res="";
        for(int i=0;i<version1.size();i++){
            if(version1[i]=='.'){
                v1.push_back(stoi(res));
                res="";
            }
            else{
                res+=version1[i];
            }
        }
        if(res.size()!=0) v1.push_back(stoi(res));
         res="";
        for(int i=0;i<version2.size();i++){
            if(version2[i]=='.'){
                v2.push_back(stoi(res));
                res="";
            }
            else{
                res+=version2[i];
            }
        }
        if(res.size()!=0) v2.push_back(stoi(res));
        if(v1.size()==v2.size()){
            int n=v1.size();
            for(int i=0;i<n;i++){
                if(v1[i]>v2[i]){
                    return 1;
                }
                else if(v1[i]<v2[i]){
                    return -1;
                }
            }
            return 0;
        }
        else if(v1.size()>v2.size()){
             int n=v2.size();
             int k=0;
            for(int i=0;i<n;i++){
                if(v1[i]>v2[i]){
                    return 1;
                }
                else if(v1[i]<v2[i]){
                    return -1;
                }
                k++;
            }
            while(k<v1.size()){
                if(v1[k]!=0) return 1;
                k++;
            }
            
            return 0;
        }
        else{
             int n=v1.size();
             int k=0;
            for(int i=0;i<n;i++){
                if(v1[i]>v2[i]){
                    return 1;
                }
                else if(v1[i]<v2[i]){
                    return -1;
                }
                k++;
            }
           while(k<v2.size()){
            if(v2[k]!=0) return -1;
            k++;
           }
           return 0;
        }
        return 0;
    }
};