class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       if(nums.size()<=2) return 0;
        int res=0;
        for(int i=0;i<nums.size()-2;i++){
           for(int j=i+1;j<nums.size()-1;j++){
             auto it=lower_bound(nums.begin()+j+1,nums.end(),nums[i]+nums[j]);
             if(it!=nums.end()){
                int ind=it-nums.begin();
              
                res+=(ind-1-j);
             }
             else{
                res+=(nums.size()-1-j);
             }
           }
           
        }
        
        return res;
    }
};