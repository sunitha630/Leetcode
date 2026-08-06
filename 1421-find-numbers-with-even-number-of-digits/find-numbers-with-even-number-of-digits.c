int noOfDigits(int num){
    int cnt=0;
    while(num!=0){
        cnt++;
        num/=10;
    }
    return cnt;
}
int findNumbers(int* nums, int numsSize) {
    int final_cnt=0;
    for(int i=0;i<numsSize;i++){
        int res=noOfDigits(nums[i]);
        if(res%2==0){
            final_cnt++;
        }
    }
    return final_cnt;
}