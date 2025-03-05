class Solution {
public:
    string convert(int n){
        string res="";
        while(n){
            res+=(n%10+'0');
            n=n/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    vector<string> simplifiedFractions(int n) {
        vector<string>result;
        for(int i=1;i<=n;i++){
            for(int j=2;j<=n;j++){
                if(__gcd(i,j)==1 && i!=j && (i/j)<1){
                    string res="";
                   res=convert(i);
                   res+='/';
                   string res2=convert(j);
                   res+=res2;
                   result.push_back(res);
                }
            }
        }
        return result;
    }
};