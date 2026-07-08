class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int first=0;
        int last=0;
        int i=0;
        while(i<k)
        {
            first+=nums[i];
            i++;
        }
        int j=nums.size()-1;
        while(k){
            last+=nums[j];
            k--;
            j--;
        }
        return abs(first-last);
    }
};