
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> v;
        int n=potions.size();
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
          int l=0,r=n-1,mid;
            while(l<=r){
                mid=(l+r)>>1;
                long long ans = (long long)spells[i] *(long long) potions[mid];
                if(ans >= success) r=mid-1;
                else l=mid+1;
            }
            v.push_back(n-l);
        };
        return v;
    }
};