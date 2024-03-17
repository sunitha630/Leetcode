class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        stack<pair<int,int>>st;
        vector<vector<int>>v;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            if(i==0){
                st.push({intervals[i][0],intervals[i][1]});
            }
            else{
                if(st.top().second>=intervals[i][0]){
                    int m=min(st.top().first,intervals[i][0]);
                    int ma=max(st.top().second,intervals[i][1]);
                    st.pop();
                    st.push({m,ma});
                }
                else{
                    st.push({intervals[i][0],intervals[i][1]}); 
                }
            }
        }
        while(!st.empty()){
            vector<int>res;
            res.push_back(st.top().first);
            res.push_back(st.top().second);
            v.push_back(res);
            st.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};