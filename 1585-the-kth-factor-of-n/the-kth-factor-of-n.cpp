class Solution {
public:
    int kthFactor(int n, int k) {
        int count_of_factors = 0, half_count = 0;
        int sq;
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                sq = i;
                half_count += 1;
            }
        }
        if(sq * sq == n) count_of_factors = (half_count * 2) - 1;
        else count_of_factors = (half_count * 2);

        if(count_of_factors < k) return -1;
        int st = 1, end = count_of_factors;
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                int first = i;
                int last = n / i;
                if(st == k){
                    return first;
                }
                if(end == k){
                    return last;
                }
                st += 1;
                end -= 1;
            }
        }
        return -1;
    }
};