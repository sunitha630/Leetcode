class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int>mp;
       for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
       }
       int k;
       map<int,int>::iterator it;
       for(it=mp.begin();it!=mp.end();it++){
           if(it->second>=(nums.size()/2)+1){
               k=it->first;
               break;
           }
       }
       return k;
    }
};