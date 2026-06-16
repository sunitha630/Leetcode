int findLucky(int* arr, int arrSize) {
    int *freq_array=(int *)calloc(501,sizeof(int));
    for(int i=0;i<arrSize;i++){
        freq_array[arr[i]] = freq_array[arr[i]]+1;
    }
    int max=-1;
    for(int i=1;i<501;i++){
        if(freq_array[i]==i){
            max=i;
        }
    }
    return max;

}