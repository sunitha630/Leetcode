class Solution {
public:
    long long removeZeros(long long n) {
        string str=to_string(n);
        str.erase(remove(str.begin(), str.end(), '0'), str.end());
        return stoll(str);
    }
};