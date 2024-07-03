class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
       int mi=INT_MAX;
       if(nums.size()<=4){
        return 0;
       } 
       else{
         mi=min(mi,abs(nums[n-1]-nums[3]));
         mi=min(mi,abs(nums[n-4]-nums[0]));
         mi=min(mi,abs(nums[n-3]-nums[1]));
         mi=min(mi,abs(nums[n-2]-nums[2]));
        
       }
       return mi;
       
    }
};