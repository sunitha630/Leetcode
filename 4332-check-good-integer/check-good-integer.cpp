class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0,s_sum=0;
        while(n!=0){
            sum+=(n%10);
            s_sum+=((n%10)*(n%10));
            n=n/10;
        }
        if(s_sum-sum>=50) return true;
        return false;
    }
};