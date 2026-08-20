class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int l1=0,l2=0;
        for(int i=2;i<nums.size();i++){
            if(arr1[l1]>arr2[l2]){
                arr1.push_back(nums[i]);
                l1++;
            }
            else{
                arr2.push_back(nums[i]);
                l2++;
            }
        }
        vector<int>res;
        int i=0,j=0;
        while(i<arr1.size()){
            res.push_back(arr1[i++]);
        }
        while(j<arr2.size()){
            res.push_back(arr2[j++]);
        }
        return res;
    }
};