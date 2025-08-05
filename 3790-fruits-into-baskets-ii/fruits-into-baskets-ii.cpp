class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<int>vec(fruits.size(),0);
        int res=0;
        for(int i=0;i<fruits.size();i++){
            bool flag=false;
            for(int j=0;j<baskets.size();j++){
                if(fruits[i]<=baskets[j] && !vec[j]){
                    vec[j]=1;
                    flag=true;
                    break;
                }
            }
            if(!flag) res++;
        }

        return res;
    }
};