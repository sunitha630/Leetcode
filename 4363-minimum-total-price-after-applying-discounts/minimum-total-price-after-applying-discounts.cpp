class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int m=prices.size(),n=discounts.size();
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int i=m-1,j=n-1;
        double res=0;
        while(i>=0 && j>=0){
            res+=((prices[i]*(100-discounts[j]))/100.0);
            i--;
            j--;
        }
        while(i>=0){
            res+=prices[i];
            i--;
        }
        return res;
    }
};