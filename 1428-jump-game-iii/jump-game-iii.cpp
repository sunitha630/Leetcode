class Solution {
public:
    bool flag=false;
    void recurse(vector<int>& arr,int index,int n,vector<int>&visited){
        if(index>=n || index<0 || visited[index]){
            return;
        }
        if(arr[index]==0){
            flag=true;
            return;
        }  
        visited[index]=1;
        recurse(arr,index+arr[index],n,visited);
        recurse(arr,index-arr[index],n,visited);
        visited[index]=0;
    }
    bool canReach(vector<int>& arr, int start) {
        vector<int>visited(arr.size(),0);
        recurse(arr,start,arr.size(),visited);
        return flag;
    }
};