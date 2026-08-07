int productOfDigits(int num){
    int pro=1;
    while(num!=0){
        int digit = num % 10;
        pro = pro * digit;
        num = num / 10;
    }
    return pro;
}
int smallestNumber(int n, int t) {
    for(int i=n;i<=100;i++){
        int res=productOfDigits(i);
        if(res%t==0){
            return i;
        }
    }
    return 0;
}