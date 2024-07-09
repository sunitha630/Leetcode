class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans=0,sum=0;
        for(int i=0;i<customers.size();i++){
            if(sum-customers[i][0]<=0){
                sum=0;
                ans+=(customers[i][0]+customers[i][1])-customers[i][0];
                sum+=customers[i][0]+customers[i][1];
            }
            else{
                sum+=customers[i][1];
                ans+=sum-customers[i][0];
                
            }
        }
        return ans/customers.size();
         
    }
};