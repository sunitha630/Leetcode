class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<int>& visited, int i, int n) {
        visited[i] = 1;
        for (int j=0;j<n;j++) {
            if (isConnected[i][j]==1 && !visited[j]) {
                dfs(isConnected,visited,j,n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n, 0);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if(!visited[i]){
                dfs(isConnected, visited, i, n);
                count++;
            }
        }
        return count;
    }
};