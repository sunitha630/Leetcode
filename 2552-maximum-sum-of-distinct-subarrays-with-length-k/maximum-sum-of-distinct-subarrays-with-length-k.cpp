class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       long long ans=0;
       long long sum=0;
       long long i=0,j=0;
       unordered_map<long long,long long>mp;
       for(j=0;j<k;j++){
            sum+=nums[j];
            mp[nums[j]]++;
       }
       if(mp.size()==k){
        ans=sum;
       }
       for(j=k;j<nums.size();j++){
        sum-=nums[i];
        if(mp[nums[i]]>1){
            mp[nums[i]]--;
        }
        else{
            mp.erase(nums[i]);
        }
        sum+=nums[j];
        mp[nums[j]]++;
        i++;
        if(mp.size()==k){
            ans=max(ans,sum);
        }
       }
       return ans;
    }
};