bool compare(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
}
class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>res(people.size());
        vector<vector<int>>flowers2=flowers;
        
        sort(flowers.begin(),flowers.end());
        sort(flowers2.begin(),flowers2.end(),compare);
        for(int i=0;i<people.size();i++){
           
            auto started = upper_bound(flowers.begin(), flowers.end(), people[i],
                [](int val, const vector<int>& a) {
                    return val < a[0];   
                });

            
            auto ended = lower_bound(flowers2.begin(), flowers2.end(), people[i],
                [](const vector<int>& a, int val) {
                    return a[1] < val;
                });

          
             res[i] = (started - flowers.begin()) - (ended - flowers2.begin());
        }
        return res;
    }
};