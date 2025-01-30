#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recurse(bitset<32> &str, int n, vector<int> &vec, unordered_map<bitset<32>, int> &mp) {
        if (mp.find(str) != mp.end()) {
            return;
        }
        if (vec.size() == (1 << n)) return;
        
        vec.push_back(static_cast<int>(str.to_ulong()));
        mp[str]++;

        for (int i = 0; i < n; i++) {
            str.flip(i); // Toggle the bit
            recurse(str, n, vec, mp);
            str.flip(i); // Restore original bit
        }
    }

    vector<int> grayCode(int n) {
        vector<int> vec;
        bitset<32> str; // Use a sufficiently large bitset
        unordered_map<bitset<32>, int> mp;
        recurse(str, n, vec, mp);
        return vec;
    }
};
