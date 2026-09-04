class Solution {
public:
    bool isHappy(int n) {
        while(n>=10){ //82 1>=10
            int sum=0;
            while(n!=0){
                int digit = n%10; 
                sum+=(digit*digit);//82
                n=n/10;//0
            }
            //sum-->1
            n=sum;

        }
        if(n==1 || n==7) return true;
        return false;

    }
};