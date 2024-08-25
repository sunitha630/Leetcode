class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
       priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(make_pair(nums[i],i));
        }
        while(k--){
            int dummy=pq.top().first*multiplier;
            int dummy2=pq.top().second;
            pq.pop();
            pq.push(make_pair(dummy,dummy2));
        }
        while(!pq.empty()){
            nums[pq.top().second]=pq.top().first;
            pq.pop();
        }
        return nums;
        
    }
};