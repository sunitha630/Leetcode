class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
       priority_queue<int>pq;
       for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
       } 
       int i=0;
      while(!pq.empty()){
        int alice=pq.top();
        pq.pop();
        int bob=pq.top();
        pq.pop();
        nums[i]=bob;
        nums[i+1]=alice;
        i+=2;
      }
      reverse(nums.begin(),nums.end());
      return nums;
    }
};