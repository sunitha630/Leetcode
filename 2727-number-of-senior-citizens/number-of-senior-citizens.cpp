class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(int i=0;i<details.size();i++){
            string res="";
        res+=details[i][11];
        res+=details[i][12];
        int n=stoi(res);
        if(n>60){
            cout<<res<<endl;
            cnt++;
        }
        }
        return cnt;
       
        
    }
};