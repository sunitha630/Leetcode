class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(),happiness.rend());
        for(int i=0;i<happiness.size();i++) cout<<happiness[i]<<" ";
        int kk=0;
        long long res=0;
        for(int i=0;i<k;i++){
            if(happiness[i]-kk > 0) {
                res+=happiness[i]-kk;
                kk++;
            }
            else{
                break;
            }
            
        }
        return res;
    }
};