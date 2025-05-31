class Solution {
public:
    bool isprime(long long n){
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    long long sumOfLargestPrimes(string s) {
      long long sum=0;
      map<long long,int>mp;
      for(int i=0;i<s.size();i++){
        string str="";
        for(int j=i;j<s.size();j++){
            str+=s[j];
            long long num=stoll(str);
            if(isprime(num)){
                mp[num]++;
            }

        }
      }
      int k=0;
      for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
        sum+=it->first;
        k++;
        if(k==3) break;
    }

      return sum;  
    }
};