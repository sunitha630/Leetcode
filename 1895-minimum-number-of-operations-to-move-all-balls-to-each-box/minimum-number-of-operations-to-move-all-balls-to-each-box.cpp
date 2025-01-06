class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(i!=j && boxes[j]=='1'){
                    sum+=abs(i-j);
                }
            }
            res[i]=sum;
        }
        return res;
    }
    

};