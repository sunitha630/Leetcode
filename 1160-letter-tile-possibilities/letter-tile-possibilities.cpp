class Solution {
public:
    int factorial(int n){
        if(n==0 || n==1){
            return 1;
        }
        return n*factorial(n-1);
    }
    void recurse(string &tiles,string res,int ind,unordered_map<string,int>&mp){
        if(ind >= tiles.size()){
            if(mp.find(res)==mp.end() && res!=""){
                mp[res]=1;
            }
            return;
        }
        recurse(tiles,res+tiles[ind],ind+1,mp);
        recurse(tiles,res,ind+1,mp);
    }
    int numTilePossibilities(string tiles) {
        sort(tiles.begin(),tiles.end());
        unordered_map<string,int>mp;
        unordered_map<string,int>::iterator it;
        unordered_map<char,int>mp2;
        unordered_map<char,int>::iterator ii;
        recurse(tiles,"",0,mp);
        set<char>st;
        unsigned long long res=0,dummy=1;
        for(it=mp.begin();it!=mp.end();it++){
            int n=it->first.size();
            if(n==1) res+=1;
            else {
                mp2.clear();
                for(int i=0;i<n;i++){
                    mp2[it->first[i]]++;
                }
                dummy=1;
                for(ii=mp2.begin();ii!=mp2.end();ii++){
                    dummy=(dummy*(factorial(ii->second)));
                }
                res+=(factorial(n)/dummy);

            }
            
        }
        return res;
    }
};