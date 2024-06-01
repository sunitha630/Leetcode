class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
       int num=log10(nums[0])+1;
       long long sum=0;
       while(num){
            unordered_map<int,int>mp;
            unordered_map<int,int>::iterator it;
            for(int i=0;i<nums.size();i++){
                int k=nums[i]%10;
                nums[i]=nums[i]/10;
                mp[k]++;
            }
            vector<int>dummy;
            for(it=mp.begin();it!=mp.end();it++){
                dummy.push_back(it->second);
            }
            for(int i=0;i<dummy.size()-1;i++){
                for(int j=i+1;j<dummy.size();j++){
                    sum+=(dummy[i]*dummy[j]);
                }
            }  
                      
            num--;

       }
       
       return sum; 
    }
};