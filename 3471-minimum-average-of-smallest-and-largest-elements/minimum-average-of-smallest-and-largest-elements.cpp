class Solution {
public:
    double min(double a,double b){
        if(a>b){
            return b;
        }
        return a;
    }
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        double res=10000000;
        while(i<j){
            res=min(res,(nums[i]+nums[j])/2.0);
            i++;
            j--;
        }
        return res;
    }
};