class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0],j=0;
        vector<int>vec(prices.size());
        for(int i=1;i<prices.size();i++){
            if(prices[i]>=prices[i-1]){
                vec[i]=max(vec[j]+(prices[i]-prices[j]),vec[i-1]+(prices[i]-prices[i-1]));
            }
            else{
                vec[i]=vec[i-1];
            }
            if(m>prices[i]){
                m=prices[i];
                j=i;
            }
        }
        return vec[prices.size()-1];
    }
};