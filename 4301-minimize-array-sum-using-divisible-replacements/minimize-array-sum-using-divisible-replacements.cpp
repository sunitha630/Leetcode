class Solution {
public:
    bool isPrime(int n){
        if(n<=2) return true;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    long long minArraySum(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        long long res=0;
        for(int i=0;i<nums.size();i++){
                int mi=100000;
                for(int j=1;j<=sqrt(nums[i]);j++){
                    
                    if(nums[i]%j==0){
                      //  cout<<nums[i]<<" "<<sqrt(nums[i])<<endl;
                        if(mp.find(j)!=mp.end()){
                            mi=min(mi,j);
                        
                        }
                        else if(mp.find(nums[i]/j)!=mp.end()){
                            mi=min(mi,(nums[i]/j));
                        
                        }
                    }
                }
                res+=mi;
           
        }
    return res;
    }
};