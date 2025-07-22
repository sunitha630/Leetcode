class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int res=INT_MIN;
        int i=0,j=0;
        int sum=0;
        map<int,int>mp;
        while(j<nums.size()){
            if(mp.find(nums[j])!=mp.end()){
               
                res=max(res,sum);
                
                int end=mp[nums[j]];
                for(int kk=i;kk<=end;kk++){
                    mp.erase(nums[kk]);
                    sum-=nums[kk];
                }
                i=end+1;
            }


               sum+=nums[j];
                mp[nums[j]]=j;
                j++; 
        }
        res=max(res,sum);
        return res;
        
    }
};