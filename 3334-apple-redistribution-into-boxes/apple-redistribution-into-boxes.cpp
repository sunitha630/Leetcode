class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total_count=0;
        for(int i=0;i<apple.size();i++){
            total_count +=apple[i];
        }
        int res=0;
        sort(capacity.rbegin(),capacity.rend());
        for(int i=0;i<capacity.size();i++){
            if(total_count==0 || total_count<0) break;
            res++;
            total_count-=capacity[i];
        }
        return res;
    }
};