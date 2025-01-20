class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat[0].size();
        int n=mat.size();
        vector<int>col(m,0);
        vector<int>row(n,0);
        map<int,pair<int,int>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[mat[i][j]]={i,j};
            }
        }
        int res=0;
        for(int i=0;i<arr.size();i++){
            row[mp[arr[i]].first]++;
            if(row[mp[arr[i]].first]==m){
                
                res=i;
                break;
            }
            col[mp[arr[i]].second]++;
            if(col[mp[arr[i]].second] == n){
                res=i;
                cout<<"second"<<endl;
                break;
            }
        }
        return res;
    }
};