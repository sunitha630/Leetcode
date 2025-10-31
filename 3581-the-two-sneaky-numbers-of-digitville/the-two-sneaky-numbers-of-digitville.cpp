class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        int i=1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                res.push_back(nums[i]);
                i+=2;
            }
            else{
                i+=1;
            }
        }
        return res;
    }
};