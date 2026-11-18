class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>vec(100001+nums.size());
        int num=1;
        for(int i=0;i<nums.size();i++){
            if(vec[nums[i]]==0){
                vec[nums[i]]=1;
                num=max(num,nums[i]+1);
            }
            else{
                  while(vec[num] == 1) {
                    num++;
                }
                vec[num]=1;
                num++;
            }
        }
        vector<int>vec2;
        for(int i=0;i<vec.size();i++){
            if(vec[i]==1) vec2.push_back(i);
        }
        int res=0;
        for(int i=0;i<vec2.size();i++){
            res+=(vec2[i]-nums[i]);
        }
        return res;
    }
};