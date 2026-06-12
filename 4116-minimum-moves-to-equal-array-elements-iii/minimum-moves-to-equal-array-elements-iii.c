int minMoves(int* nums, int numsSize) {
    int max_ele=nums[0];
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max_ele){
            max_ele=nums[i];
        }
    }
    int res=0;
    for(int i=0;i<numsSize;i++){
        res+=(max_ele-nums[i]);
    }
    return res;
}