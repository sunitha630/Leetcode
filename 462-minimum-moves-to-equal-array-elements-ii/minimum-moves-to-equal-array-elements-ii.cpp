class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int mid=0;
        sort(nums.begin(),nums.end());
        if(n%2==0){
            
            mid=(nums[n/2]+nums[(n/2)-1])/2;
        }
        else{
            mid=nums[n/2];
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=abs(mid-nums[i]);
        }
        return ans;
    }
};