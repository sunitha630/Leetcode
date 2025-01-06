class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.size();
        long long sum=0;
        string res="";
        for(int i=n-1;i>=0;i--){
            sum+=shifts[i];
           res+=97+((s[i]-'a'+sum)%26);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};