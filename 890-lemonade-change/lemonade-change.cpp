class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_cnt=0,ten_cnt=0,twen_cnt=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                five_cnt++;
            }
        else if(bills[i]==10){
            ten_cnt++;
            if(five_cnt>=1){
                five_cnt--;
            }
            else{
              
                return false;
            }
            
        }
        else{
             if(ten_cnt>=1 && five_cnt>=1){
                ten_cnt--;
                five_cnt--;
            }
            else if(five_cnt>=3){
                five_cnt-=3;
            }
            else{
               
                return false;
            }
            twen_cnt++;
        }
        }
        return true;
    }
};