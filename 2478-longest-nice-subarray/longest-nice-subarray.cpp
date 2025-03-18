class Solution {
public:
    bool check(int num,vector<int>&vec){
        int i=vec.size()-1;
        int k=num;
        while(num){
            if(vec[i] && (num&1)){
                return false;
            }
            i--;
            num=num/2;
        }
        int j=vec.size()-1;
        while(k){
            if(k&1){
                vec[j]=1;
            }
            k=k/2;
            j--;
        }
        return true;
    }
    void uncheck(int num,vector<int>&vec){
        int i=vec.size()-1;
        while(num){
            if((num&1) && vec[i]){
                vec[i]=0;
            }
            i--;
            num=num/2;
        }
    }
    int longestNiceSubarray(vector<int>& nums) {
        int max_ele=*max_element(nums.begin(),nums.end());
        int max_len=log2(max_ele)+1;
        vector<int>vec(max_len);
        int res=1;
        int i=0,j=0;
        while(j<nums.size()){
            if(check(nums[j],vec)){
                j++; 
            }
            else{
                res=max(res,j-i);
                uncheck(nums[i],vec);
                i++;
            }
        }
        res=max(res,j-i);
        return res;
    }
};