class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>vec1;
        
        vec1=nums;
        while(vec1.size()>1){
            vector<int>vec2;
        for(int i=0;i<vec1.size()-1;i++){
            vec2.push_back((vec1[i]+vec1[i+1])%10);
        }
        vec1=vec2;
        }
        return vec1[0];
    }
};