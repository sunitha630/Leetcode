class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int>vec(102,0);
        for(int i=0;i<nums.size();i++){
            vec[nums[i][0]]+=1;
            vec[nums[i][1]+1]-=1;
        }
        for(int i=1;i<vec.size();i++){
            vec[i]+=vec[i-1];
        }
        int cnt=0;
        for(int i=0;i<vec.size();i++){
            if(vec[i]) cnt++;
        }
        return cnt;
    }
};