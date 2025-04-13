class Solution {
public:
    long long mod = 1e9 + 7;
    long long power(long long base, long long exp) {
        long long result = 1;
        base %= mod;
        while (exp>0) {
            if (exp%2==1)
                result=(result * base) % mod;
            base=(base * base) % mod;
            exp/= 2;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        
    long long int mod=1e9+7;
    long long int a,b;
    if(n==1) return 5;
    if(n%2==0){
        a = power(4,(n/2)) ;
        b = power(5,(n/2)) ;
    }
    else{
         a = power(4,(n/2));
         b = power(5,(n/2)+1);
      
    }
    int c=(a*b)%mod;
    return c;
    }
};