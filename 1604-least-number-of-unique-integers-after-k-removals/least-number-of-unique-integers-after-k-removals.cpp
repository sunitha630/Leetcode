class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
   map<int,int>mp1;
	map<int,int>::iterator it;
	for(int i=0;i<arr.size();i++){
		mp1[arr[i]]++;
	}
	vector<pair<int,int> >vect;
	for(it=mp1.begin();it!=mp1.end();it++){
		vect.push_back(make_pair(it->second,it->first));
	}
	sort(vect.begin(),vect.end());
	vector<int>v;
	for(int i=0;i<vect.size();i++){
		v.push_back(vect[i].first);
	}
	for(int i=0;i<v.size();i++){
            if(k==0){
                break;
            }
            else if(k>=v[i]){
                k-=v[i];
                v[i]=0;
            }
            else if(v[i]>k){
                v[i]-=k;
                k=0;
            }
        }
        int c=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                c++;
            }
        }
       return c;
    }
};