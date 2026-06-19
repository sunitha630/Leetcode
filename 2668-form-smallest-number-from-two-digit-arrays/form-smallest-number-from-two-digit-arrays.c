int minNumber(int* nums1, int nums1Size, int* nums2, int nums2Size) {
        int *first_freq=(int *)calloc(10,sizeof(int));
        int *second_freq=(int *)calloc(10,sizeof(int));
        for(int i=0;i<nums1Size;i++){
            first_freq[nums1[i]]++;
        }
        int mi=100;
        for(int i=0;i<nums2Size;i++){
            if(first_freq[nums2[i]]>=1){
                if(mi>nums2[i]) mi=nums2[i];
            }
            second_freq[nums2[i]]++;
        }
        if(mi!=100) return mi;
        for(int i=10;i<=99;i++){
            int first=i%10;
            int second=i/10;
            if((first_freq[first]>=1 && second_freq[second]>=1) || (first_freq[second]>=1 && second_freq[first]>=1) ){
                return i;
            }
        }
        return 0;
}