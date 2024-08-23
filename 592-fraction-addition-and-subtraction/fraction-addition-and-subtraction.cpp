class Solution {
public:
    int gcdd(int a, int b)
    {
        if(a<0){
            a=a*-1;
        }
    if (a == 0)
        return b;
    return gcd(b % a, a);
    }
    string fractionAddition(string expression) {
        bool minus=false,div=false;
        vector<int>a;
        vector<int>b;
       for(int i=0;i<expression.size();i++){
       
        if(expression[i]=='-'){
            minus=true;
        }
        else if(expression[i]=='/'){
            div=true;
        }
        else if(expression[i]-'0'<=9 && expression[i]-'0'>=1){
            if(minus==false && div==false){
                string s="";
                if(i+1<expression.size() && expression[i+1]-'0'>=0 && expression[i+1]-'0'<=9){
               s+=expression[i];
               s+=expression[i+1];
               a.push_back(stoi(s));
                }
            
            else{
               a.push_back(expression[i]-'0');
            }
                minus=false;
            }
            else if(minus && div==false){
                string s="";
                if(i+1<expression.size() && expression[i+1]-'0'>=0 && expression[i+1]-'0'<=9){
               s+=expression[i];
               s+=expression[i+1];
               a.push_back(stoi(s)*(-1));
                }
            
            else{
               a.push_back((expression[i]-'0')*-1);
            }
                minus=false;
            }
            else if(div){
                string s="";
                if(i+1<expression.size() && expression[i+1]-'0'>=0 && expression[i+1]-'0'<=9){
               s+=expression[i];
               s+=expression[i+1];
               b.push_back(stoi(s));
                }
            
            else{
               b.push_back(expression[i]-'0');
            }
                div=false;
            }
        }
       } 
       int previousa=a[0],previousb=b[0];
       for(int i=1;i<a.size();i++){
            previousa=previousa*b[i]+previousb*a[i];
            previousb=previousb*b[i];
            int gcd=gcdd(previousa,previousb);
            previousa=previousa/gcd;
            previousb=previousb/gcd;
       }
       string res="";
       res+=to_string(previousa);
       res+='/';
       res+=to_string(previousb);
       return res;
    }
};