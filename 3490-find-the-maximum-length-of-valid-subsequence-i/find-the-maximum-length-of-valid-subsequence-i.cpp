class Solution {
public:
    int maximumLength(vector<int>& nums) {
     int odd=0,even=0,mixed=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0) even++;
        else odd++;
     }
     for(int i=1;i<nums.size();i++){
        if((nums[i-1]%2==0 && nums[i]%2!=0) || (nums[i-1]%2!=0 && nums[i]%2==0) ){
            mixed++;
        }
     }
     
     int res=max(even,odd);
     res=max(res,mixed+1);
     return res;
    }
};