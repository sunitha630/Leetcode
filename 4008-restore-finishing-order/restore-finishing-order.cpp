class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>vec;
        map<int,int>mp;
        for(int i=0;i<friends.size();i++){
            mp[friends[i]]++;
        }
        for(int i=0;i<order.size();i++){
            if(mp.find(order[i])!=mp.end()){
                vec.push_back(order[i]);
            }
        }
        return vec;
    }
};