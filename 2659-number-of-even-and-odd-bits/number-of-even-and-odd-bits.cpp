class Solution {
public:
    vector<int> evenOddBit(int n) {
      int even=0,odd=0,i=0;
      while(n){
        if(n&1){
            if(i%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        i++;
        n=n/2;
      }  
      return {even,odd};
    }
};