class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int res=0;
        while(numBottles>=numExchange){
            res+=numExchange;
            numBottles=(numBottles-numExchange)+1;
            numExchange+=1;
        }
        res+=numBottles;
        return res;
       
    }
};