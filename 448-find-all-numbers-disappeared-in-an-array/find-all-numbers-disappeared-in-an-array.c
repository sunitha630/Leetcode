/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *freq=(int *)calloc(100001,sizeof(int));
    for(int i=0;i<numsSize;i++){
        freq[nums[i]]++;
    }
    int *res=(int *)calloc(100001,sizeof(int));
    int j=0;
    for(int i=1;i<=numsSize;i++){
        if(freq[i]==0){
            res[j++]=i;
        }
    }
    *returnSize=j;
    return res;
}