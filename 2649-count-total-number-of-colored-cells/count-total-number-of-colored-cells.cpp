class Solution {
public:
    long long coloredCells(int n) {
        long long odd=1;
        long long res=0;
        for(long long i=1;i<n;i++){
            res+=(2*odd);
            odd+=2;
        }
        res+=odd;
        return res;
    }
};