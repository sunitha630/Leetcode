class Solution {
public:
    int maxDiff(int num) {
        int n=log10(num)+1;
        vector<int>vec1;
        while(num){
            vec1.push_back(num%10);
            num/=10;
        }
        vector<int>vec2;
        vec2=vec1;
        reverse(vec1.begin(),vec1.end());
        reverse(vec2.begin(),vec2.end());
        int res=0;
        int first=-1;
            for(int i=0;i<vec1.size();i++){
                if(vec1[i]!=9){
                    first=vec1[i];
                    break;
                }
            }
            for(int i=0;i<vec1.size();i++){
                if(vec1[i]==first){
                    vec1[i]=9;
                } 
            }
            
          
            int second=-1;
            bool flag=false;
            for(int i=0;i<vec2.size();i++){
                if(vec2[i]!=1 &&vec2[i]!=0){
                    if(i!=0) flag=true;
                    second=vec2[i];
                    break;
                }
            }
            for(int i=0;i<vec2.size();i++){
                if(flag){
                if(vec2[i]==second){
                    vec2[i]=0;
                }
                }else{
                    if(vec2[i]==second){
                    vec2[i]=1;
                }
                }
            }
            
            
             for(int i=0;i<vec1.size();i++){
                int diff=vec1[i]-vec2[i];
                res+=(diff*pow(10,vec1.size()-1-i));
            }
        return res;
    }
};