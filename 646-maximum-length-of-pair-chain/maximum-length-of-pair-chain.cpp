class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
});
        int cnt=1;
        int i=0,j=i+1;
        while(i<pairs.size() && j<pairs.size()){
            if(pairs[j][0]>pairs[i][1]){
                cnt++;
                i=j;
                j=i+1;
            }
            else{
                j++;
            }
        }
        return cnt;
    }
};