class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0;
        while(tickets[k]){
            for(int i=0;i<tickets.size();i++){
                if(tickets[i]){
                tickets[i]--;
                count++;
                }
                if(tickets[k]==0){
                    break;
                }
            }
        }
        return count;
    }
};