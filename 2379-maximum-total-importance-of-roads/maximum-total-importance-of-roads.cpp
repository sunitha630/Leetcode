class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        map<int,int>mp;
        long long sum=0;
        for(int i=0;i<roads.size();i++){
            mp[roads[i][0]]++;
            mp[roads[i][1]]++;
        }
        
        map<int,int>::iterator it;
        vector<pair<int,int>>vect;
        for(it=mp.begin();it!=mp.end();it++){
            vect.push_back(make_pair(it->second,it->first));
        }
        sort(vect.rbegin(),vect.rend());
        int j=0;
       
        vector<int>res(n,0);
        for(int i=0;i<vect.size();i++){
            vect[i].first=n;
            n--;
        }
        for(int i=0;i<vect.size();i++){
           res[vect[i].second]=vect[i].first;
        }
        for(int i=0;i<roads.size();i++){
            sum+=(res[roads[i][0]]+res[roads[i][1]]) ;    
        }
        return sum;


    }
};