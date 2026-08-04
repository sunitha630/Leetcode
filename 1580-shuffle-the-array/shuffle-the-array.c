

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* res=(int *)malloc(numsSize*sizeof(int));
    int i=0,j=n,k=0;
    while(k<2*n){
        res[k++]=nums[i++];
        res[k++]=nums[j++];
    }
    *returnSize=numsSize;
    return res;
    
}