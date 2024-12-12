class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>arr(n,1);
        int count=1;
        arr[0]=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i-1]%2!=0 || nums[i-1]%2==0 && nums[i]%2!=0){
                count++;
                arr[i]=count;

            }
            else{
                arr[i]=count;
            }
        
        }
        vector<bool>res;
        for(int i=0;i<queries.size();i++){
            
            if(arr[queries[i][1]]-arr[queries[i][0]] == queries[i][1]-queries[i][0]){
                res.push_back(true);
            }
            else
            {
                res.push_back(false);
            }
        }
        return res;

    }
};