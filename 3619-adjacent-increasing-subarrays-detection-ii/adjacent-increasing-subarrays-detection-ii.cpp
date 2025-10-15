class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        vector<int>dummy;
        int cnt=1;
        for(int i=0;i<nums.size()-1;i++){
           if(nums[i]>=nums[i+1]){
                dummy.push_back(cnt);
                cnt=1;
           }
           else{
            cnt++;
           }
        }
        dummy.push_back(cnt);
        int ma=0;
        int m=0;
        for(int i=0;i<dummy.size()-1;i++){
            ma=max(min(dummy[i],dummy[i+1]),ma);
            m = max(m, dummy[i]);
        }
         m = max(m, dummy.back());
        if(m==0) return 0;
        if(ma<(m/2)){
            return m/2;
        }
        return ma;
    }
};