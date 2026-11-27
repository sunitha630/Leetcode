class Solution {
public:
    int countDominantElements(vector<int>& nums) {
      
        if(nums.size()<=1) return 1;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            float avg=0;
            if(i==0){
                avg=nums[1];
            }
            else if(i==nums.size()-1){
                avg=nums[nums.size()-2];
            }
            else{
                avg=(nums[i-1]+nums[i+1])/2.0;
            }
            if(avg<=nums[i]) cnt++;
        }
        return cnt;
    }
};