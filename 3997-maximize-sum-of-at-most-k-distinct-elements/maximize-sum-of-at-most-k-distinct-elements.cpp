class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int>vec;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
      
        for(auto it=st.rbegin();it!=st.rend();it++){
            vec.push_back(*it);
            k--;
            if(!k) break;
            
        }
        return vec;
        
    }
};