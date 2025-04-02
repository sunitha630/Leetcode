class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxVal=LLONG_MIN;
       for(int i=0;i<nums.size()-2;i++){
           for(int j=i+1;j<nums.size()-1;j++){
               if(i<j){
                   for(int k=j+1;k<nums.size();k++){
                       if(j<k){
                        long long tripletValue = (long long)(nums[i]-nums[j])*nums[k];
                        maxVal = max(maxVal, tripletValue);
                       }
                   }
               }
           }
       }
    if(maxVal>0){
        return maxVal;
    }
        else
        {
            return 0;
        }
    }
};