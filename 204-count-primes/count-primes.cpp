class Solution {
public:
    int countPrimes(int n) {
      if(n==0 || n==1) return 0;
      vector<bool>vec(n+1,true);
	  for(int i=2;i*i<=n;i++){
		if(vec[i]){
			for(int j=i*i;j<=n;j+=i){
				vec[j]=false;
			}
	    }
      }
      int cnt=0;
      for(int i=2;i<n;i++){
        if(vec[i] && vec[i]<=n){
            cnt++;
        }
      }
      return cnt;
    }
};