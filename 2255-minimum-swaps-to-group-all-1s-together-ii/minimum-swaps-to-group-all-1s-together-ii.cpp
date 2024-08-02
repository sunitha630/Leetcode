class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int windowSize=0;
        int res=0,zc=0,oc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                windowSize++;
            }
        }
        for(int i=0;i<windowSize;i++){
            if(nums[i]==0) zc++;
        }
         res=zc;
        for(int i=1;i<nums.size();i++){
            cout<<nums[i]<<" ";
           if (nums[(i + windowSize - 1) % nums.size()] == 0) zc++;
          if(nums[i-1]==0) zc--;
           res=min(res,zc);
        }
        return res;
    }
};