class Solution {
public:
    int search(vector<int>&prefix_sum,int target){
        int l=0,h=prefix_sum.size()-1;
        int res=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(prefix_sum[mid]<=target){
                res=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return res+1;
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>prefix_sum(nums.size());
        prefix_sum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix_sum[i]=prefix_sum[i-1]+nums[i];
        }
        vector<int>res(queries.size());
        for(int i=0;i<queries.size();i++){
            res[i]=search(prefix_sum,queries[i]);
        }
        return res;
    }
};