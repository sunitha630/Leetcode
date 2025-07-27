class Solution {
public:
    int countHillValley(vector<int>& nums) {
        map<pair<int,int>,int>mp;
        int cnt=0;
        for(int i=1;i<nums.size()-1;i++){
            int leind=i-1,riind=i+1,num=nums[i];
            while(leind>=0 && riind<nums.size()){
                if(num>nums[leind] && num<nums[riind] || num<nums[leind] && num>nums[riind]){
                    break;
                }
                else if(num>nums[leind] && num>nums[riind]){
                    if(mp.count({leind,riind})) break;
                    mp[{leind,riind}]++;
                    cnt++;
                    break;
                }
                else if(num<nums[leind] && num<nums[riind]){
                    if(mp.count({leind,riind})) break;
                    mp[{leind,riind}]++;
                    cnt++;
                    break;
                }
                else if(num==nums[leind] && num!=nums[riind]){
                    leind--;
                }
                else if(num!=nums[leind] && num==nums[riind]){
                    riind++;
                }
                else if(num==nums[leind] && num==nums[riind]){
                    leind--;
                    riind++;
                }
            }
        }
        return cnt;
    }
};