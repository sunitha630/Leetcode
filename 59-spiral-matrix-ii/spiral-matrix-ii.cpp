class Solution {
public:
    vector<vector<int>> generateMatrix(int number) {
       vector<vector<int>> v(number, vector<int>(number));
	int num=1;
	vector<int>res;
	int i=0,j=0,m1=0,n1=1,m=number,n=number;
	while(num<=number*number){
		while(j<m){
			v[i][j]=num;
			num++;
			j++;	
		}
		m--;
		i++;
		j--;
		while(i<n){
			v[i][j]=num;
			num++;
			i++;
		}
		n--;
		j--;
		i--;
		while(j>=m1 && i>=n1){
			v[i][j]=num;
			num++;
			j--;
		}
		m1++;
		i--;
		j++;
		
		while(i>=n1){
			v[i][j]=num;
			num++;
			i--;
		}
		n1++;
		j++;
		i++;
	} 
    return v;
    }
};