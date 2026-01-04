class Solution {
public:
    int divi(int value){
        int cnt=0;
        int val=0;
        for(int i=2;i*i<=value;i++){
            if(i*i==value) return 0;
            if(value%i==0 ){
                cnt++;
                val=i;
            }
            
        }
        if(cnt==1) return val;
        else return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(divi(nums[i])){
                sum+=divi(nums[i]);
                sum+=nums[i]/divi(nums[i]);
                sum+=1;
                sum+=nums[i];
            }
        }
        return sum;
    }
};