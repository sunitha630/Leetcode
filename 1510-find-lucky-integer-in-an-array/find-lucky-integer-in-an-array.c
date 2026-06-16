int findLucky(int* arr, int arrSize) {
    int *freq_array=(int *)calloc(501,sizeof(int));
    for(int i=0;i<arrSize;i++){
        freq_array[arr[i]] = freq_array[arr[i]]+1;
    }
   
    for(int i=500;i>0;i--){
        if(freq_array[i]==i) return i;
  }
  return -1;

}