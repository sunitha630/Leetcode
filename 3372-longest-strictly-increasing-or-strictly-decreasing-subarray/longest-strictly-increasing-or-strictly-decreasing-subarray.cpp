class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=0,cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                cnt++;
                ans=max(ans,cnt);
                cnt=0;
            }
            else{
                cnt++;
            }
        }
        cnt++;
        ans=max(ans,cnt);
        cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                cnt++;
                ans=max(ans,cnt);
                cnt=0;
            }
            else{
                cnt++;
            }
        }
        cnt++;
        ans=max(ans,cnt);
        return ans;
    }
};