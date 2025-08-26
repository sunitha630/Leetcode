class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int max=0,in,ma=0;
        for(int i=0;i<dimensions.size();i++){
            int s=0;
            s=(dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]);
            if(max < s){
                max=s;
                ma=dimensions[i][0]*dimensions[i][1];
            }
            else if(max==s){
                max=s;
               if(ma<dimensions[i][0]*dimensions[i][1]){
                   ma=dimensions[i][0]*dimensions[i][1];
               }
            }
        }
        return ma;
    }
};