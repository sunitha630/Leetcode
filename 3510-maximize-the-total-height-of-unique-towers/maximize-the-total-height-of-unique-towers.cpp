class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.rbegin(),maximumHeight.rend());
        int twoOnes=0;
        long long s=0;
        for(int i=1;i<maximumHeight.size();i++){
           
            maximumHeight[i]=min(maximumHeight[i],(maximumHeight[i-1]-1));

        }
        for(int i=0;i<maximumHeight.size();i++){
             if(maximumHeight[i]==0){
                return -1;
            }
            s+=maximumHeight[i];
        }
        if(twoOnes>1){
            return -1;
        }
        return s;
    }
};