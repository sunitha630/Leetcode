class Solution {
public:
    int ceill(int num,int div){
        if(num%div==0){
            return num/div;
        }
        else 
        {
            return (num/div)+1;
        }
    }
    long long maxKelements(vector<int>& nums, int k) {
       priority_queue<long long>pq;
       for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
       } 
       long long res=0;
       while(k--){
            //cout<<ceill(pq.top(),3)<<" ";
            res+=pq.top();
            pq.push(ceill(pq.top(),3));
            pq.pop();
       }
       return res;
    }
};