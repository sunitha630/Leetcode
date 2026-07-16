class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<long long>prefixGcd(nums.size());
        int m=0;
        for(int i=0;i<nums.size();i++){
            m=max(m,nums[i]);
            prefixGcd[i]=__gcd(m,nums[i]);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        long long sum=0;
        int low=0,high=prefixGcd.size()-1;
       while(low<high){
            sum+=__gcd(prefixGcd[low],prefixGcd[high]);
            low++;
            high--;
       }
       return sum;

    }
};