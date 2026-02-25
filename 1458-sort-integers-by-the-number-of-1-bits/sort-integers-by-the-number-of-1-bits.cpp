class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++){
            int cnt_bits=0;
            int dum=arr[i];
            while(arr[i]){
                if(arr[i]&1){
                    cnt_bits++;
                }
                arr[i]=arr[i]>>1;
            }
            mp[cnt_bits].push_back(dum);
        }
        vector<int>res;
        for(auto it:mp){
            for(int i=0;i<it.second.size();i++){
                res.push_back(it.second[i]);
            }
        }
        return res;
    }
};