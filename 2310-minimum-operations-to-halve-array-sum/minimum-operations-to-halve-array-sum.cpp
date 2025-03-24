class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum1=0,sum2=0;
    
        priority_queue<double>p;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
            sum1+=nums[i];
            sum2+=nums[i];
        }
        double target=sum1/2;
        int ans=0;
        while(sum2>target){
            double first= p.top();
            sum2-=first;
            sum2+=(first/2);
            
            ans+=1;
            p.pop();
            p.push(first/2);
            if(sum2<=target) break;
        }
        return ans;
    }
};