class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     int low=0,high=nums.size()-1;
     int first_ind=-1,last_ind=-1;
     while(low<=high){
        int mid=low + (high-low)/2;
        if(nums[mid]==target){
            first_ind=mid;
            high=mid-1; //left
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
     }
     low=0,high=nums.size()-1;
     while(low<=high){
        int mid=low + (high-low)/2;
        if(nums[mid]==target){
            last_ind=mid;
            low=mid+1; //right 
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
     }
     return {first_ind,last_ind};
       
    }
};