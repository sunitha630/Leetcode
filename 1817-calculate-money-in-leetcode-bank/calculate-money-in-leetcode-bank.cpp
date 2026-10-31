class Solution {
public:
    int totalMoney(int n) {
       int weeks=(n/7);
       int days=(n%7);
       int res=0;
       for(int i=4;i<4+weeks;i++){
            res+=(7*i);
       }
       int val=weeks+1;
       for(int i=0;i<days;i++){
            res+=val;
            val++;
       }
       return res;
    }
};