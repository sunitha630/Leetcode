class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
       stack<pair<int,int>>st;
        vector<vector<int>>v;
        sort(meetings.begin(),meetings.end());
        for(int i=0;i<meetings.size();i++){
            if(i==0){
                st.push({meetings[i][0],meetings[i][1]});
            }
            else{
                if(st.top().second>=meetings[i][0]){
                    int m=min(st.top().first,meetings[i][0]);
                    int ma=max(st.top().second,meetings[i][1]);
                    st.pop();
                    st.push({m,ma});
                }
                else{
                    st.push({meetings[i][0],meetings[i][1]}); 
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
        int count=v[0][0]-1;
        for(int i=0;i<v.size();i++){
            cout<<v[i][0]<<" "<<v[i][1]<<endl;
        }
        for(int i=0;i<v.size()-1;i++){
            count+=(v[i+1][0]-v[i][1])-1;
        } 
        count+=days-v[v.size()-1][1];
        return count;
    }
};