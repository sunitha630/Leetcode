class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int n=matrix.size();
        if(n==0) return res;
        int m=matrix[0].size();
        int row=n,col=m;
	int i=0,j=0,m1=0,n1=1;
	while(res.size()<row*col){
		while(j<m){
			res.push_back(matrix[i][j]);
			j++;	
		}
		m--;
		i++;
		j--;
		while(i<n){
			res.push_back(matrix[i][j]);
			i++;
		}
		n--;
		j--;
		i--;
		while(j>=m1 && i>=n1){
			res.push_back(matrix[i][j]);
			j--;
		}
		m1++;
		i--;
		j++;
        if(res.size()!=row*col){
		while(i>=n1){
			res.push_back(matrix[i][j]);
			i--;
		}
        }	
		n1++;
		j++;
		i++;
	}
	
    return res;
    }
};