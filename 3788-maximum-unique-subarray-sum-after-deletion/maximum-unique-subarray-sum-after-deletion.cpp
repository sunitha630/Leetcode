class Solution {
public:
    int maxSum(vector<int>& nums) {
        map<int,int>mp;
        int sum=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){

                mp[nums[i]]++;
            }
            else{
                cnt++;
            }

        }
        for(auto &it:mp){
            sum+=it.first;
        }
        if(cnt==nums.size()){
            return *max_element(nums.begin(),nums.end());
        }
        return sum;
    }
};