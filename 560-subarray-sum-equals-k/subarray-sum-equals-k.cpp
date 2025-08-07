class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       vector<int>pre(nums.size());
       //if(k==0) return 0;
       int sum=0;
       map<int,int>mp;
       int res=0;
       for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        pre[i]=sum;
        
       
        if(mp.find(pre[i]-k)!=mp.end()){
            res+=mp[pre[i]-k];
        }
        if(pre[i]-k==0){
            res++;
        }
        mp[pre[i]]++;
       } 
       
    return res;
    }
};