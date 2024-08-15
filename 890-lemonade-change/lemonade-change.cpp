class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveCount=0,tenCount=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                fiveCount++;
            }
            else if(bills[i]==10){
                if(fiveCount<1){
                    return false;
                }
                else{
                    fiveCount--;
                }
                tenCount++;
            }
            else if(bills[i]==20){
               if(tenCount>=1 && fiveCount>=1){
                tenCount--;
                fiveCount--;
               }
               else if(fiveCount>=3){
                fiveCount-=3;
               }
               else{
                return false;
               }
            }
        }
        return true;
    }
};