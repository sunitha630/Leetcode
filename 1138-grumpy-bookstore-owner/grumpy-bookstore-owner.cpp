class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
       int sum=0;
       for(int i=0;i<customers.size();i++){
        if(!grumpy[i]){
            sum+=customers[i];
        }
       } 
       //cout<<sum;
       int ma=0;
       for(int i=0;i<customers.size()-minutes+1;i++){
            int s=sum;
            for(int j=i;j<i+minutes;j++){
                if(grumpy[j]==1){
                    //cout<<customers[j]<<" ";
                    s+=customers[j];
                }
                
            }
            ma=max(ma,s);
            //cout<<i<<" "<<ma<<endl;
       }
       return ma;
    }
};