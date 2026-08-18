class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(k==nums.size()){
            int ma=-1;
            for(int i=0;i<nums.size();i++){
                ma=max(ma,nums[i]);
            }
            return ma;
        }
        else if(k==1){
            map<int,int>mp;
            for(int i:nums){
                mp[i]++;
            }
            int ma=-1;
            for(auto it:mp){
                if(it.second==1){
                    ma=max(ma,it.first);
                }
            }
            return ma;
        }
        else{
            int first=nums[0],second=nums[nums.size()-1];
            bool f=false,s=false;
            int n=nums.size();
            for(int i=1;i<n;i++){
                if(first==nums[i]){
                    f=true;
                }
            }
            for(int i=0;i<n-1;i++){
                if(second==nums[i]){
                    s=true;
                }
            }
            if(!f && !s) return max(nums[0],nums[n-1]);
            else if(!f && s) return nums[0];
            else if(f && !s) return nums[n-1];
            else return -1;
        }
        return -1;
    }
};