int search(int* nums, int numsSize, int target) {
   int low = 0, high = numsSize-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(nums[mid]==target){
        return mid; //found element
    }
    else if(nums[mid]<target){
        low=mid+1; //ignore left
    }
    else{
        high=mid-1; //ignore right
    }
   }
   return -1;
}