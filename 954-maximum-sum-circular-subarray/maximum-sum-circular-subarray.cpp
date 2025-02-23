class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int currMin=nums[0],currMax=nums[0];
       int globalMin=nums[0],globalMax=nums[0];
       int total=nums[0],cnt=0,m=INT_MIN,start=0,end=0;
       int res=0;
       //if all the elements are -ve numbers then return maximum number in the array
        for(int i=0;i<nums.size();i++){
           if(nums[i]<0){
            cnt++;
           }
           m=max(m,nums[i]);
        }
        if(cnt==nums.size()){
            return m;
        }
    // if the maximum subarray sum lies between 1 to n-1 then return the sum
        for(int i=1;i<nums.size();i++){
            if(nums[i]>currMax+nums[i]){
                currMax=nums[i];
                if(globalMax<currMax){
                    globalMax=currMax;
                    start=i;
                    end=i;
                }
            }
            else{
                currMax=currMax+nums[i];
                if(globalMax<currMax){
                    globalMax=currMax;
                    end=i;
                }
            }
       }
       
        cout<<start<<" "<<end<<endl;
       if(start>=0 && end<nums.size()-1){
            
            res=globalMax;
       }
    // otherwise you have to calculate the circular maximum sum
    // circular max sum = total sum - minimum subarray sum
       for(int i=1;i<nums.size();i++){
        total+=nums[i];
        currMin=min(nums[i],nums[i]+currMin);
        globalMin=min(globalMin,currMin);
       }
      int res2=max(total,total-globalMin);
      res=max(res,res2);
       return res; 
    }
};