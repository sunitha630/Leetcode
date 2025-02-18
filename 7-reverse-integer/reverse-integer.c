int reverse(int x){
    long long int tem=0;
    int y=x;
    while(y)
    {
        tem=tem*10+y%10;
        y/=10;
    }
     if(tem>INT_MAX || tem<INT_MIN) return 0; 
        return (tem);


}