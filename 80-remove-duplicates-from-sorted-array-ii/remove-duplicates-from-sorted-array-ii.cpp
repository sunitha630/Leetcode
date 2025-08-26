class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int i=0,cnt=0;
        for(auto &it:mp){
            if(it.second>=2){
                nums[i]=it.first;
                nums[i+1]=it.first;
                i++;
                cnt+=2;
            }
            else{
                nums[i]=it.first;
                cnt++;
            }
            i++;
        }
        return cnt;
    }
};