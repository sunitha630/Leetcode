class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        //1 1 1 2 2 3       1->3   {3,1}
          //                2->2   {2,2}
          //                3->1   {1,3}
        for(int num:nums){
            mp[num]=mp[num]+1;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        vector<int>res;
        while(k>0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
    }
};