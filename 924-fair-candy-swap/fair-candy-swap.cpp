class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int s1=accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int s2=accumulate(bobSizes.begin(),bobSizes.end(),0);
        int avg=(s2-s1)/2;
        sort(bobSizes.begin(),bobSizes.end());
        vector<int>res;
        for(int i=0;i<aliceSizes.size();i++){
            int l=0,h=bobSizes.size()-1;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(bobSizes[mid] == (avg+aliceSizes[i])){
                    res.push_back(aliceSizes[i]);
                    res.push_back(bobSizes[mid]);
                    return res;
                }
                else if(bobSizes[mid]>avg+aliceSizes[i]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
    
        }
        return res;
    }
};