class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_cnt=0,ten_cnt=0,twenty_cnt=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i] == 5){
                five_cnt++;
            }
            else if(bills[i] == 10){
                if(five_cnt>=1){
                    five_cnt--;
                }
                else{
                    return false;
                }
                ten_cnt++;
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
                twenty_cnt++;
            }
        }
        return true;
    }
};