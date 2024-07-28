class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int isum=0,dsum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9 && nums[i]>=1){
                isum+=nums[i];
            }
            else{
                dsum+=nums[i];
            }
        }
        if(isum==dsum) return false;
        return true;
    }
};