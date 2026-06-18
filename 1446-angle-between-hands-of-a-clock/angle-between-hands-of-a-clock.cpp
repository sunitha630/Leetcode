class Solution {
public:
    double angleClock(int hour, int minutes) {
        double first = 30.00*hour;
    double second = 5.5*minutes;
    double res= abs(first - second );
    if(res>180){
        res=360.0-res;
    }
    return res;
    }
};