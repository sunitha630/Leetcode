class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum1=(n*n)+n,sum2=n*n;
        return __gcd(sum1,sum2);
    }
};