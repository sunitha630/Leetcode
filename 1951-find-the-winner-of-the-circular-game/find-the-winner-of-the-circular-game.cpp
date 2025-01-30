class Solution {
public:
void recurse(int start,vector<int>&vec,int k){
	if(vec.size()==1) return;
	int index = (start+k-1)%vec.size();
	vec.erase(vec.begin()+index);
	recurse(index,vec,k);
}
    int findTheWinner(int n, int k) {
        vector<int>vec;
	for(int i = 0; i < n ; i++){
		vec.push_back(i+1);
	}
	recurse(0,vec,k);
    return vec[0];
    }
};