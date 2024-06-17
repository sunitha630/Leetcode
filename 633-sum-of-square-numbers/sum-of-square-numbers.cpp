class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int i=0,j=sqrt(c);
        while(i<=j){
            cout<<i<<" "<<j<<endl;
            long long int res=(i*i)+(j*j);
            if(res==c){
                return true;
            }
            else if(res>c){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};