class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long int sum1=0,sum2=0;
        for(int i=0;i<nums.size()/2;i++){
            sum1+=nums[i];
            
        }
        for(int i=nums.size()/2;i<nums.size();i++){
            sum2+=nums[i];
        }
        int i=0,j=nums.size()/2;
        int cnt=0;
        while(i<nums.size()/2 && j<nums.size()){
            if(sum1>sum2 || sum2>sum1) cnt++;
            
            sum1+=nums[j];
            sum2+=nums[i];
            sum1-=nums[i];
            sum2-=nums[j];
            i++;
            j++;
        }
        return cnt;

    }
};