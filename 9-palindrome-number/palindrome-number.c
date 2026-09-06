bool isPalindrome(int x){
    long int tem=0,rev;
    int y=x;
    if(x<0)
    return false;
    while(y)
    {
       tem=tem*10+y%10;
       y/=10; 
    }
    if(tem==x)
    return true;
    else
    return false;

}