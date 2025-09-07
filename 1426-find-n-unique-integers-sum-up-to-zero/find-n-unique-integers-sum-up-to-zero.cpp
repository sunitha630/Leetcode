class Solution {
public:
    vector<int> sumZero(int n) {
       vector<int>vec;
       for(int i=1;i<=(n/2);i++){
        vec.push_back(i);
        vec.push_back(-1*i);
       } 
       if(n%2!=0) vec.push_back(0);
       return vec;
    }
};