class Solution {
public:
    int minElement(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            
            while(nums[i]){
               s+=nums[i]%10;
              nums[i]=nums[i]/10; 
            }
            nums[i]=s;
            s=0;
        }
        int res= *min_element(nums.begin(),nums.end());
        return res;
    }
};