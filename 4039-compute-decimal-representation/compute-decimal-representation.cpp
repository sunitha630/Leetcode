class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>vec;
        int cnt=log10(n);
        while(n){
            vec.push_back(n%10);
            n=n/10;
        }
        vector<int>res;
        for(int i=vec.size()-1;i>=0;i--){
            vec[i]=vec[i]*pow(10,cnt);
            if(vec[i]!=0){
                res.push_back(vec[i]);
            }
            cnt--;
        }
        //reverse(res.begin(),res.end());
        
        return res;

    }
};