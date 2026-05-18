class Solution {
public:
    bool flag=false;
    void recurse(vector<int>&arr,vector<int>&visited,int ind){
        if(ind>=arr.size() || ind<0 || visited[ind]){
            return;
        }
        if(arr[ind]==0){
            flag=true;
            return;
        }
        visited[ind]=1;
        recurse(arr,visited,ind+arr[ind]);
        recurse(arr,visited,ind-arr[ind]);
        visited[ind]=0;
    }
    bool canReach(vector<int>& arr, int start) {
        vector<int>visited(arr.size(),0);
        recurse(arr,visited,start);
        return flag;
    }
};