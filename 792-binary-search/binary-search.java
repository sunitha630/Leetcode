class Solution {
    public int bs(int[] nums,int target,int low,int high){
        if(high<low) return -1;
        int mid = (low+high)/2;
        if(target==nums[mid]) return mid;
        else if(target<nums[mid]){
            return bs(nums,target,low,mid-1);
        }
        return bs(nums,target,mid+1,high);
    }
    public int search(int[] nums, int target) {
        // int low=0,high = nums.length-1;
        // while(low<=high){
        //     int mid = (low+high)/2;
        //     if(nums[mid]==target) return mid;
        //     else if(target>nums[mid]){
        //         low = mid+1;
        //     } 
        //     else{ 
        //         high = mid-1;
        //     }
        // }
        // return -1;
        return bs(nums,target,0,nums.length-1);
    }
}