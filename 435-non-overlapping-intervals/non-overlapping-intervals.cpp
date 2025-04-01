class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        }
        int i=0,j=1;
        int res=0;
        while(j<intervals.size()){
            if(intervals[i][1]>intervals[j][0]){
                res++;
                if(intervals[i][1]>intervals[j][1]){
                    i=j;
                    
                }
                j++;
            }
            else{
                i=j;
                j++; 
            }
        }
        return res;
    }
};