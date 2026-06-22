class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> mp;

        for(char c:text) {
            mp[c]++;
        } 

        int min_abn = min({mp['b'], mp['a'], mp['n']});
        int min_lo = min(mp['l'], mp['o']);

        return min(min_abn, min_lo / 2);
    }
};