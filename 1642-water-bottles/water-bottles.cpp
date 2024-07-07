class Solution {
public:
    int numWaterBottles(int n, int k) {
        int res=n;
        while(k<=n){
            
            res+=(n/k);
            n=(n%k)+(n/k);
        }
        return res;
        
    }
};