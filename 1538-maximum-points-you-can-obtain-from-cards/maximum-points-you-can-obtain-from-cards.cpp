class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        vector<int>pre;
        vector<int>suf;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
            pre.push_back(sum);
        }
        cout<<endl;
        int s=0;
        for(int i=n-1;i>=n-k;i--){
            s+=cardPoints[i];
            suf.push_back(s);
        }
        reverse(suf.begin(),suf.end());
        int res=suf[0];
        for(int i=0;i<k-1;i++){
            res=max(res,pre[i]+suf[i+1]);
        }
        if(res<pre[k-1]) res=pre[k-1];
        return res;

    }
};