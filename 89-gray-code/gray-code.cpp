class Solution {
public:
    int convert(string str){
	int n=str.size();
	int num=0,power=0;
	for(int i=n-1;i>=0;i--){
		if(str[i]=='1'){
		num+=pow(2,power);
	}
		power++;
	}
	return num;
}
void recurse(string &str,int ind,int n,vector<string>&vec,unordered_map<string,int>&mp){
	if(ind > pow(2,n)) return;
	if(mp.find(str)!= mp.end()) return;
	vec.push_back(str);
	mp[str]++;
	for(int i=0;i<n;i++){
		if(str[i]=='0'){
			str[i]='1';
			recurse(str,ind+1,n,vec,mp);
			str[i]='0';
		}
		else if(str[i]=='1'){
			str[i]='0';
			recurse(str,ind+1,n,vec,mp);
			str[i]='1';
		}
		
	}
	
}
    vector<int> grayCode(int n) {
        vector<string>vec;
	unordered_map<string,int>mp;
	string str="";
	vector<int>res;
	for(int i=0;i<n;i++){
		str+='0';
	}
	recurse(str,0,n,vec,mp);
	for(int i=0;i<vec.size();i++){
		res.push_back(convert(vec[i]));
	}
    return res;
    }
};