class Solution {
public:
    string intToRoman(int num) {
        map<int,string,greater<int>>mp={
            {1000,"M"},
            {900,"CM"},
            {500,"D"},
            {400,"CD"},
            {100,"C"},
            {90,"XC"},
            {50,"L"},
            {40,"XL"},
            {10,"X"},
            {9,"IX"},
            {5,"V"},
            {4,"IV"},
            {1,"I"}
        };
        string res="";
        for(auto it:mp){
            int value=it.first; //value
            string symb=it.second; //symbol

            while(num>=value){
                res+=symb;
                num-=value;
            }

        }
        return res;
    }
};