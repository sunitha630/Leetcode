class Solution {
public:
    long long check(map<int,int>&mp){
        long long sum=0;
        for(auto &it:mp){
            sum+=((it.second)*(it.second-1))/2;
        }
        return sum;
    }
    long long countGood(vector<int>& nums, int k) {
      int i=0,j=0;
      map<int,int>mp;
      long long res=0;
      long long ch=0;
      
      while(j<nums.size()){
             ch+=mp[nums[j]];
            mp[nums[j]]++;
          
           j++;
       while(ch>=k){
            res+=(nums.size()-j+1);
            ch-=(mp[nums[i]]-1);
            mp[nums[i]]=mp[nums[i]]-1;
            
            i++;
        }
      
      }
      
      return res;  
    }
};