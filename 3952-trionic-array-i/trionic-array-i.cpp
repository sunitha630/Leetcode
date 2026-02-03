class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int k1=0,k2=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return false;
            }
        }
        if(nums[0]>=nums[1]) return false;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
               k1=i; 
            }
            else{
                break;
            }
        }
        if(k1!=nums.size()-1){
        for(int i=k1+1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                k2=i;
            }
            else{
                break;
            }
        }
        }
        else{
            return false;
        }
        if(k2!=nums.size()-1){
           for(int i=k2+1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
               k1=i; 
            }
            else{
                break;
            }
        }
        }
        else{
        return false;
        }
       if(k1!=nums.size()-1) return false;
        return true;
    }
};