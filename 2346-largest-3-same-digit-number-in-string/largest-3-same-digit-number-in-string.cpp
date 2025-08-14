class Solution {
public:
    string largestGoodInteger(string num) {
        int i=0,j=1,k=2;
        string res="";
        while(k<num.size()){
            if(num[i]==num[j] && num[j]==num[k] && num[k]==num[i]){
                string dummy="";
                dummy+=num[i];
                dummy+=num[j];
                dummy+=num[k];
                if(res<dummy){
                    res=dummy;
                }
            }
            i++;
            j++;
            k++;
        }
        return res;
    }
};