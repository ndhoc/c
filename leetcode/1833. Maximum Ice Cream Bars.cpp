class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        long long cnt = 0, s = 0;
        sort(costs.begin(), costs.end());
        for(int ice:costs) {
            s += ice;
            if(s <= coins) ++cnt;
        }
        return cnt;
    }
};