/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* res = malloc(numsSize*sizeof(int));
    res[0]=nums[0];
    for(int i=1;i<numsSize;i++){
        res[i]=res[i-1]+nums[i];
    }
    *returnSize = numsSize;
    return res;
}