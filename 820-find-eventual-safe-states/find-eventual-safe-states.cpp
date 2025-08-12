class Solution {
public:
    bool recurse(vector<vector<int>>&graph,vector<int>&visited,int val,vector<int>&reached){
        if(graph[val].size()==0){
            reached[val]=1;
            return true;
        } 
        if(visited[val]){
            if(reached[val]) return true;
            return false;
        } 
        visited[val]=1;
        bool flag=true;
        for(int i=0;i<graph[val].size();i++){
            flag&=recurse(graph,visited,graph[val][i],reached);
        }
        return reached[val]=flag;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>res;
        vector<int>visited(graph.size(),0);
        vector<int>reached(graph.size(),0);
        for(int i=0;i<visited.size();i++){
            if(!visited[i]){
                recurse(graph,visited,i,reached);
            }
        }

        for(int i=0;i<reached.size();i++){
            if(reached[i] || graph[i].size()==0){
            res.push_back(i);
            }
        }
        return res;
        
    }
};