class Solution {
public:
    int maxProduct(int n) {
        int m1=0,m2=0;

        while(n){
            int rem=n%10;
           
            if(rem>=m1){
                m2=m1;
                m1=rem;
            }
            else if(rem>m2){
                m2=rem;
            }
            n=n/10;
        }
        return m1*m2;
    }
};