class Solution {
public:
    int minimumPushes(string word) {
       vector<int>freq(26,0);
        for(int i=0;i<word.size();i++){
            freq[word[i]-'a']++;
        }
        sort(freq.rbegin(),freq.rend());
        
        int res=0;
        for(int i=0;i<26;i++){
            if(i<8) res+=(freq[i]);
            else if(i<16) res+=(freq[i]*2);
            else if(i<24) res+=(freq[i]*3);
            else res+=(freq[i]*4);
        }
        return res;
    }
};