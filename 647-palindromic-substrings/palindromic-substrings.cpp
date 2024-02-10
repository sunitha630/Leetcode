class Solution {
public:
    bool pal(string s){
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i+=1;
            j-=1;
        }
        return true;
    }
    int fun(string s,int start,int size ,int count,string dummy){
        if(start==size) return count;
        dummy+=s[start];
        if(pal(dummy)) count++;
        return fun(s,start+1,size,count,dummy);

    }
    int countSubstrings(string s) {
        int k=0;
       for(int i=0;i<s.size();i++){
           k+=fun(s,i,s.size(),0,"");
       }
       return k;
    }
};