class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int,vector<int>>mp;
        int res=0;
        for(int i=0;i<reservedSeats.size();i++){
            mp[reservedSeats[i][0]].push_back(reservedSeats[i][1]);
        }
       
        for(auto it:mp){
            bool first=true,second=true,third=true;
            for(int i=0;i<it.second.size();i++){
                if(it.second[i]==2 || it.second[i]==3){
                    first=false;
                }
                else if(it.second[i]==4 || it.second[i]==5){
                    second=false;
                    first=false;
                }
                else if(it.second[i]==6 || it.second[i]==7){
                    second=false;
                    third=false;
                }
                else if(it.second[i]==8 || it.second[i]==9){
                    third=false;
                }
            }
            if(first && second && third){
                res+=2;
            }
            else if(first && third && !second){
                res+=2;
            }
            else if(!first && !second && !third){
                res+=0;
            }
            else{
                res+=1;
            }
        }
        res+=((n-mp.size())*2);
        return res;
    }
};