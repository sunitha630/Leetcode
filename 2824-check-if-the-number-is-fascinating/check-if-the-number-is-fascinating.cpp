class Solution {
public:

    bool isFascinating(int n) {
        int n1=n;
        int arr[10];
        while(n1){
            arr[n1%10]++;
            if(n1%10==0) return false;
            n1/=10;
        }
        int n2=2*n;
        while(n2){
            arr[n2%10]++;
            if(n2%10==0) return false;
            n2/=10;
        }
        int n3=3*n;
        while(n3){
            arr[n3%10]++;
            if(n3%10==0) return false;
            n3/=10;
        }
        for(int i=1;i<10;i++){
            if(arr[i]==1){

            }
            else{
                return false;
            }
         
        }
        return true;
    }
};