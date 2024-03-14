class Solution {
public:
    int math(vector<int>& arr,int target){
        int mainc=0,c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                c++;
            }
            else{
                for(int i=1;i<=c;i++){
                    mainc+=i;
                }
                c=0;
            }
        }
            for(int i=1;i<=c;i++){
                    mainc+=i;
                }
        //mainc+=dummyc;
        return mainc;
    }
    int numSubarraysWithSum(vector<int>& arr, int target) {
        if(target==0){
            int res=math(arr,target);
            return res;
        }
              int n = arr.size();
        vector<int> prefix(n, 0);
        map<int,int> mp;
        
        prefix[0] = arr[0];
        mp[prefix[0]]++;
        int count=0;
        if(prefix[0] == target){
            count=1;
        }
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + arr[i]; 
            if (prefix[i] == target) {
                count++;
            } 
            if (mp.find( prefix[i] - target) !=mp.end()) {
                count += mp[ prefix[i] - target];
            }
             mp[prefix[i]]++;
        }
        
        return count;

      }
};