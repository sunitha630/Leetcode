int sumOfSquaresOfDigits(int num){
    int sum = 0;
    while(num!=0){ 
        int digit = num % 10; 
        sum += (digit*digit); 
        num/=10;
    }
    return sum; 
}
bool isHappy(int n) {
    while(n>=10){
    int ans=sumOfSquaresOfDigits(n);
    n=ans;
    }
    if(n==1 || n==7) return true;
    return false;
}