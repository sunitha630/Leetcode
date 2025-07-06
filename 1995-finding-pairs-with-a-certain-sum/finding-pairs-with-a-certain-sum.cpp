class FindSumPairs {
public:
    vector<int>n1;
    vector<int>n2;
    map<int,int>mp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        n1=nums1;
        n2=nums2;
        for(int i=0;i<nums2.size();i++){
            mp[n2[i]]++;
        }
    }
    
    void add(int index, int val) {
        if(mp[n2[index]]>=2){
            mp[n2[index]]--;
        }
        else{
            mp.erase(n2[index]);
        }
        n2[index] = n2[index] + val;
        mp[n2[index]]++;
        
    }
    int count(int tot) {
        int res=0;
        for(int i=0;i<n1.size();i++){
            if(mp.find(tot-n1[i])!=mp.end()){
                res+=mp[tot-n1[i]];
            }
        }
        return res;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */