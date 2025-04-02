class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(nums.size());
        vector<int>post(nums.size());
        int sum=nums[0];
        int sum2=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            pre[i]=sum;
            sum+=nums[i];
        }
        for(int i=nums.size()-2;i>=0;i--){
            post[i]=sum2;
            sum2+=nums[i];
        }
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++){
            int pre_sum=(nums[i]*(i))-(pre[i]);
            int post_sum=(post[i])-(nums[i]*(n-i-1));
            if(i==0){
                res[i]=post_sum;
            }
            else if(i==nums.size()-1){
                res[i]=pre_sum;
            }
            else{
                res[i]=post_sum+pre_sum;
            }
        }
        return res;
    }
};