int countPairs(int* nums, int numsSize, int target) {
   //if it is completed then go for 1512
    int resCount=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]<target){
                resCount++;
            }
        }
    }
    return resCount;


}