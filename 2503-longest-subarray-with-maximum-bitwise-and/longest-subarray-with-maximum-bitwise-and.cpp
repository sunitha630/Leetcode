class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int m=*max_element(nums.begin(),nums.end());
       int res=0,cnt=0;
       for(int i=0;i<nums.size();i++){
        if(m==nums[i]){
            cnt++;    
        }
        else{
            res=max(res,cnt);
            cnt=0;
        }
       }
       res=max(res,cnt);
       return res; 
    }
};