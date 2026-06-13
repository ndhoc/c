class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s = "zyxwvutsrqponmlkjihgfedcba", ans = "";
        int n = words.size();

        for(int i=0; i<n; ++i) {
            int sum_cur = 0;

            for(char c:words[i]) {
                sum_cur += weights[c - 97];
            }
            ans += s[sum_cur % 26];
        }
        return ans;
    }
};