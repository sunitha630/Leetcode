class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int >mp;
        map<char,int>::iterator it;
        for(int i = 0; i < stones.size();i++){
            mp[stones[i]]++;
        }
        int s = 0;
        for(int i=0;i<jewels.size();i++){
                if(mp.find(jewels[i]) != mp.end()){
                    s += mp[jewels[i]];
                }
            }
        
        return s;
    }
};