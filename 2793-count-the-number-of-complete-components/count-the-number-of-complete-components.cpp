class Solution {
public:
    void visit(int n,map<int,vector<int>>&mp,vector<int> &visited,int node,vector<int>&vec){
        if(visited[node]!=-1) return;
        visited[node]=1;
       
        for(int i=0;i<mp[node].size();i++){
            vec.push_back(mp[node][i]);
            visit(n,mp,visited,mp[node][i],vec);
        }
            
        
    }
    bool check(vector<int>&vec,map<int,vector<int>>&mp){
        int com=0;
        map<int,int>mp2;
        for(int i=0;i<vec.size();i++){
            mp2[vec[i]]++;
        }
        com=mp2.size()-1;
        //cout<<com<<" ";
        for(int i=0;i<vec.size();i++){
            if(com!=mp[vec[i]].size()) return false;
        }
        return true;
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        map<int,vector<int>>mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>visited(n,-1);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(visited[i]==-1){
                vector<int>vec;
                vec.push_back(i);
                visit(n,mp,visited,i,vec);
                //for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
               // cout<<endl;
                if(check(vec,mp)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};