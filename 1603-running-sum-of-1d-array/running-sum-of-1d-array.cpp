class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      vector<int>rs(nums.size());

      //1 2 3 4
             
      //rs=[1,3,6,10]
      int sum=0;
      for(int i=0;i<nums.size();i++){
        sum+=nums[i];  //sum=3+3 =>6+4=10
        rs[i]=sum;     // rs[3]=10;
      }
      
      return rs;

    }
};