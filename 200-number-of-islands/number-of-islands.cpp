class Solution {
public:
    void visit(vector<vector<char>> &grid,vector<vector<int>> &visited,int i,int j){
            if(i<0 || j<0 || i >= grid.size() || j >= grid[i].size() || visited[i][j] || grid[i][j]=='0'){
                return;
            }
            visited[i][j]=1;
            visit(grid,visited,i+1,j);
            visit(grid,visited,i,j+1);
            visit(grid,visited,i,j-1);
            visit(grid,visited,i-1,j);
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>>visited;
        for(int i=0 ; i < grid.size() ; i++){
            vector<int>v;
            for(int j=0 ; j < grid[i].size() ; j++){
                v.push_back(0);
        }
        visited.push_back(v);
        }
        int count=0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0; j<grid[i].size();j++){
                if(visited[i][j]==0 && grid[i][j]=='1'){
                    count++;
                    visit(grid,visited,i,j);
                }
            }
        }
        return count;

    }
};