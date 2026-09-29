class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>vec(101);
        int ma=-1;
        for(int i=0;i<nums.size();i++){
            vec[nums[i]]++;
            ma=max(ma,vec[nums[i]]);
        }
        cout<<ma<<endl;
        vector<int>res;
        while(ma--){
            for(int i=0;i<101;i++){
                if(vec[i]>0){
                    res.push_back(i);
                    vec[i]--;
                }
            }
        }
        return res;
    }
};