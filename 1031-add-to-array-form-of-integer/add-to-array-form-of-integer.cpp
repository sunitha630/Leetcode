class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        if(k==0){
            return num;
        }
        vector<int>num2;
       while(k){
        num2.push_back(k%10);
        k=k/10;
       }
        reverse(num.begin(),num.end());
       int m=num.size(),n=num2.size();
       vector<int>res;
       if(m>=n){
        int temp=0,i=0;
        for(i=0;i<n;i++){
            int t=num[i]+num2[i]+temp;
            if(t<10){
                res.push_back(t);
                temp=0;
            }
            else{
                res.push_back(t%10);
                t=t/10;
                temp=t;
            }
        }
        
        for(int j=i;j<m;j++){
            int t=num[j]+temp;
          //  cout<<num[i]<<" "<<t<<endl;
            if(t<10){
                res.push_back(t);
                temp=0;
            }
            else{
                res.push_back(t%10);
                t=t/10;
                temp=t;
            }
        }
        if(temp!=0) res.push_back(temp);
       }
       else{
        int temp=0,i=0;
        for(i=0;i<m;i++){
            int t=num[i]+num2[i]+temp;
            if(t<10){
                res.push_back(t);
                temp=0;
            }
            else{
                res.push_back(t%10);
                t=t/10;
                temp=t;
            }
        }
        for(int j=i;j<n;j++){
            int t=num2[j]+temp;
            if(t<10){
                res.push_back(t);
                temp=0;
            }
            else{
                res.push_back(t%10);
                t=t/10;
                temp=t;
            }
        }
        if(temp!=0) res.push_back(temp);
       }
       reverse(res.begin(),res.end());
       return res;
       
    }
};