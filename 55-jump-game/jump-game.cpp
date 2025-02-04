class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,-1);
        if(nums[0]==0){
            if(n==1) return true;
            return false;
        } 
        v[0]=1;
        for(int i=0;i<nums.size()-1;i++){
            if(v[i]==1){
                if(i+nums[i]<n){
                    cout<<i<<" "<<i+nums[i]<<endl;
                    for(int j=i;j<=i+nums[i];j++){
                        v[j]=1;
                    }
                }
                else if(i+nums[i]>=n){
                     return true;
                }
            }
            
        }
        for(int i=0;i<n;i++) cout<<v[i]<<endl;
        if(v[nums.size()-1]==1) return true;
        return false;
    }
};