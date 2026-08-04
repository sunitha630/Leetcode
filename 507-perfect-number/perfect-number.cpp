class Solution {
public:
    bool checkPerfectNumber(int num) {
        int s=0,temp=num;
        for(int i=1;i<num;i++){
            if(temp%i==0){
                s=s+i;
            }
        }
        return s==temp;
    }
};