class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
       
        vector<pair<int,int>>vec;
        for(int i=0;i<reward1.size();i++){
            vec.push_back({reward2[i]-reward1[i],i});
            //cout<<vec[i].first<<" "<<vec[i].second<<endl;
        }
        sort(vec.begin(),vec.end());
        int res=0;
        for(int i=0;i<k;i++){
            res+=reward1[vec[i].second];
        }
        
        for(int i=k;i<vec.size();i++){
            res+=reward2[vec[i].second];
        }
        return res;
        
    }
};