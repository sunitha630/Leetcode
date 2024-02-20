class Solution {
public:
    int missingNumber(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int k=0,res;
      for(int i=0;i<nums.size();i++){
          if(i!=nums[i]){
              res=i;
              break; 
          }
          k++;
      }
        return res;
    }
};