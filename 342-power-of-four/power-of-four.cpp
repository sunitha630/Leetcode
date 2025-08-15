class Solution {
public:
    bool isPowerOfFour(int n) {
       if (n<=0 or (n&(n-1))!=0){
           return false;
       }
       return (n-1)%3==0;
    }
};