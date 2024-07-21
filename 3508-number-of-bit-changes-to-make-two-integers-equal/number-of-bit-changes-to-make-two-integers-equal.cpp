class Solution {
public:
    int minChanges(int n, int k) {
      if(n==k){
        return 0;
      }
      if(n<k){
        return -1;
      }
      int c=0;
      while(n>0 && k>0){
         if((n&1)==1 && (k&1)==0){
            c++;
         }
         else  if((n&1)==0 && (k&1)==1){
            return -1;
         }
         n>>=1;
         k>>=1;
      }
      while(n>0){
        if(n&1){
            c++;
        }
        n>>=1;
      }
      return c;

    }
};