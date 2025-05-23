class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0,curr=0;
        int res=0;
        int m=bank.size();
        int n=bank[0].size();
        for(int i=0;i<n;i++){
            if(bank[0][i]=='1'){
                prev++;
            }
        }
        for(int i=1;i<m;i++){
            curr=0;
            for(int j=0;j<n;j++){
                if(bank[i][j]=='1'){
                curr++;
                }
            }
            //cout<<prev<<" "<<curr<<endl;
            if(prev==0 && curr!=0) prev=curr;
            else if(prev!=0 && curr!=0){
                res+=(curr*prev);
                prev=curr;
            }
        }
        return res;
    }
};