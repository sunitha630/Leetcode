class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]--;
            if((sum-nums[i])%2==0){
                if(mp[(sum-nums[i])/2]){
                return nums[i];
            }
            }
            
            mp[nums[i]]++;
        }
        return 0;
    }
};