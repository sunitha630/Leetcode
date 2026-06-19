int largestAltitude(int* gain, int gainSize) {
    int max=0;
    int sum=0;
    for(int i=0;i<gainSize;i++){
        if(max<sum){
            max=sum;
        }
        sum+=gain[i];
    }
    if(max<sum){
            max=sum;
        }
        return max;

}