class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
           if(nums[i]<0) nums[i]*=-1;
            cout<<nums[i]<<" ";
        }
        int i,j;
        long long res=0;
        sort(nums.begin(),nums.end());
        if(nums.size()%2){
            res=nums[nums.size()-1]*nums[nums.size()-1];
            i=0,j=nums.size()-2;
        }
        else{
            res=0;
            i=0,j=nums.size()-1;
        }
        
        while(i<j){
            res+=((nums[j]*nums[j])-(nums[i]*nums[i]));
            i++;
            j--;
        }
        return res;
    }
};