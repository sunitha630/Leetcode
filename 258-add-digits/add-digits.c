int addDigits(int num) {
    while(num>=10){
    int sum=0;
    while(num!=0){ //3
        int digit=num%10;
        sum+=digit;//11
        num=num/10;//0
    } 
    num=sum; //11
    }
    return num;

}