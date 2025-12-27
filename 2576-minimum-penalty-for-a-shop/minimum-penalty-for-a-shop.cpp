class Solution {
public:
    int bestClosingTime(string customers) {
        
        int total_no=0;
        int total_yes=0;
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y') total_yes++;
        }
        int res=total_yes;
        int ress=0;
        for(int i=0;i<customers.size();i++){
            if(res>total_yes+total_no){
                res=total_yes+total_no;
                ress=i;
            }
            if(customers[i]=='Y') total_yes--;
            else total_no++;
        }
        if(res>total_no){
            res=total_no;
            ress=customers.size();
        }
        return ress;
    }
};