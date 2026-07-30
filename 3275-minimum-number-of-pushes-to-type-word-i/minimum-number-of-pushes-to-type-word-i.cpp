class Solution {
public:
    int minimumPushes(string word) {
        int size=word.size();
        int n=(size/8);
        int val=4*(n*(n+1));
        return val+((size%8)*(n+1));
    }
};