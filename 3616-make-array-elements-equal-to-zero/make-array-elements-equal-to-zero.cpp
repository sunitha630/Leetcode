class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int totalsum=0,leftsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum+=nums[i];
        }
        int res=0;
        for(int i=0;i<nums.size();i++){
            leftsum+=nums[i];
            if(nums[i]==0){
            if(totalsum==2*leftsum){
                res+=2;
            }
            else if(abs((totalsum-leftsum)-leftsum)==1){
                res+=1;
            }
            }
        }
        return res;
    }
};