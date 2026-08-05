int squaresOfSum(int n){
    int sum=0;
    while(n){
        sum += ((n % 10)*(n%10));
        n /= 10;
    }
    return sum;
}
bool isHappy(int n) {
    if(n==1) return true;
    int temp=n;
    while(temp>=10){
        temp=squaresOfSum(temp);
    }
    if(temp==1 || temp==7) return true;
    return false;
}