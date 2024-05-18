class Solution {
public:
    int count(vector<int>weights,int mid){
        int count=0,sum=0;
        int i=0;
        while(i<weights.size()){
          if(sum+weights[i]<=mid){
            sum+=weights[i];
            i++;
          }
          else{
            count++;
            sum=0;
          }
         }
        if(sum<=mid){
            count++;
        }
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
        int mid;
        while(l<=h){
             mid=(l+h)/2;
            int co=count(weights,mid);
            cout<<mid<<" "<<co<<" ";
            if(co<=days){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};