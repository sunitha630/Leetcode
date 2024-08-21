class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>res;
        res=prices;
        stack<int>st;
        for(int i=0;i<prices.size();i++){
            if(st.empty()){
                st.push(i);
            }
           
            else{
                while(!st.empty() && prices[i] <= prices[st.top()]){
                   res[st.top()]=prices[st.top()]-prices[i];    
                   st.pop();
                }
                st.push(i);
            }

        }
        return res;
    }
};