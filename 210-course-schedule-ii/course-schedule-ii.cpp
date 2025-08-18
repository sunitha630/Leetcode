class Solution {
public:
    bool canSchedule(map<int,vector<int>>&mp,int val,vector<int>&visited,vector<int>&completed,vector<int>&vec){
        if(completed[val]) return true;
        if(visited[val]) return false;
        if(mp.find(val)==mp.end()){
            vec.push_back(val);
            return true;
        }
        visited[val]=1;
        bool flag=true;
        for(int i=0;i<mp[val].size();i++){
            flag&=canSchedule(mp,mp[val][i],visited,completed,vec);
        }
       vec.push_back(val);
        completed[val]=1;
        return flag;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        map<int,vector<int>>mp;
        for(int i=0;i<prerequisites.size();i++){
            mp[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int>visited(numCourses);
        vector<int>completed(numCourses);
        vector<int>vec;
        bool flag=true;
        for(int i=0;i<numCourses;i++){
            flag&=canSchedule(mp,i,visited,completed,vec);
        }
        vector<int>res;
        if(!flag) return {};
        map<int,int>mpp;
        for(int i=0;i<vec.size();i++){
            if(mpp.find(vec[i])==mpp.end()){
                res.push_back(vec[i]);
                mpp[vec[i]]++;
            }
        }
        return res;
    }
};