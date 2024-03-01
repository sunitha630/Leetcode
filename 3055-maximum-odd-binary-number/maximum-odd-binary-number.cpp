class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int zeroCount=0,oneCount=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zeroCount++;
            }
            else{
                oneCount++;
            }
        }
        string res="";
        while(oneCount>1){
            res+='1';
            oneCount--;
        }
        while(zeroCount>0){
            res+='0';
            zeroCount--;
        }
        res+='1';
        return res;

    }
};