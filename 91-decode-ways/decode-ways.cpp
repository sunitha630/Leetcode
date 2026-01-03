

class Solution {
public:
    bool isValid(char a, char b) {
    if (a == '0') return false;

    int k = (a - '0') * 10 + (b - '0');
    return k >= 1 && k <= 26;
}
    
    int numDecodings(string s) {
        if(s.size()==1){
            if(s[0]=='0') return 0;
            else return 1;
        } 
        
        vector<int>dp(s.size());
        if(s[0]=='0') return 0;
        dp[0]=1;
        if(s[1]=='0' && s[0]!='1' && s[0]!='2'){
            return 0;
        }
        else if(isValid(s[0],s[1]) && !(s[1]=='0')){
            dp[1]=2;
        }
        else{
            dp[1]=1;
        }
        for(int i=2;i<s.size();i++){
  	        if(s[i]=='0'){
  		if((s[i-1]=='1' || s[i-1]=='2') && isValid(s[i-2],s[i-1])){
           if(dp[i-1]%2!=0) dp[i]=(dp[i-1]/2)+1;
  			else dp[i]=dp[i-1]/2;
		}
        else if((s[i-1]=='1' || s[i-1]=='2') && !isValid(s[i-2],s[i-1])){
  			dp[i]=dp[i-1];
		}
		else{
			return 0;
		}

	  }else{
            if(isValid(s[i-2],s[i-1]) && isValid(s[i-1],s[i])){
                dp[i]=dp[i-1]+dp[i-2];
            }
            else if(!isValid(s[i-2],s[i-1]) && isValid(s[i-1],s[i])){
                dp[i]=2*dp[i-1];
            }
            else if(isValid(s[i-2],s[i-1]) && !isValid(s[i-1],s[i])){
                dp[i]=dp[i-1];
            }
            else{
                dp[i]=dp[i-1];
            }
      }


  }
  for(int i=0;i<dp.size();i++){
    cout<<dp[i]<<" ";
  }
  cout<<endl;
	
  return dp[s.size()-1];
    }
};