class Solution {
public:
    int minOperations(int n) {
        int res=0;
        if(n%2==0){
            int l=(2*(n/2))-1;
            int h=(2*(n/2))+1;
            int m=(l+h)/2;
            for(int i=1;i<=l;i+=2){
                res+=(m-i);
            }
        }
        else{
            int h=(2*(n/2))+1;
            
            for(int i=1;i<=h;i+=2){
                res+=(h-i);
            }
        }
        return res;
    }
};