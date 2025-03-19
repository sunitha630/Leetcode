class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        int res=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==0){
                for(int j=i;j<i+3;j++){
                if(nums[j]==0){
                    nums[j]=1;
                }
                else{
                    nums[j]=0;
                }
            }
                res++;
            }
        }
       cnt=accumulate(nums.begin(),nums.end(),0);
        if(cnt==nums.size()){
            return res;
        }
        return -1;
        
    }
};