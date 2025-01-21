class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        long long gasSum=0,costSum=0;
       for(int i=0;i<gas.size();i++){
        gasSum+=gas[i];
        costSum+=cost[i];
       } 
       if(costSum>gasSum){
        return -1;
       }
       int res=-1;
       gasSum=0,costSum=0;
       bool flag=true;
       for(int i=0;i<gas.size();i++){
            gasSum+=gas[i];
            gasSum-=cost[i];
            cout<<gasSum<<" "<<flag<<endl;
            if(gasSum>=0 && flag){
                res=i;
                flag=false;
            }
            else if(gasSum<0){
                gasSum=0;
                res=-1;
                flag=true;
            }
       }
       return res;
    }
};