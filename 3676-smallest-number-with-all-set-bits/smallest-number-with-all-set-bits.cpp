class Solution {
public:
    int smallestNumber(int n) {
        if(n==1) return 1;
        int cnt=0;
        while(n){
            cnt++;
            n=n>>1;
        }
       
        //cout<<cnt<<endl;
        return pow(2,cnt)-1;
    }
};