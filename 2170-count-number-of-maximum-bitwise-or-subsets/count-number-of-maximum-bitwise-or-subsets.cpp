class Solution {
public:
    int res=0;
    void rec(vector<int>& nums,int index,int n,int maxx,int orr){
        if(index >= n){
            if(maxx==orr){
                res++;
            }
            return;
        }
        rec(nums,index+1,n,maxx,orr|nums[index]);
        rec(nums,index+1,n,maxx,orr);
    }
    int countMaxOrSubsets(vector<int>& nums) {
     int maxx=nums[0];
     for(int i=1;i<nums.size();i++){
        maxx|=nums[i];
     }   
         rec(nums,0,nums.size(),maxx,0);
         return res;
     
    }
};