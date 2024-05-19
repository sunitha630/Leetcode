class Solution {
public:
    bool isValid(vector<int>bl,int mid,int m,int k){
        int cnt=0,ko=0;
        for(int i=0;i<bl.size();i++){
            if(bl[i]<=mid){
                ko++;
                if(ko==k){
                    ko=0;
                    cnt++;
                }
            }
            else{
                ko=0;
            }
        }
        if(cnt >= m ) return true;
        else return false;
    }
    int minDays(vector<int>& bl, int m, int k) {
       long long int mm = static_cast<long long int>(m) * k;
        if(mm>bl.size()){
            return -1;
        }
        long long int l=*min_element(bl.begin(),bl.end()),h=*max_element(bl.begin(),bl.end());
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(isValid(bl,mid,m,k)){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
            
        }
        return l;
    }
};