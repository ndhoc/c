class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long m=1e9+1, M=0;

        for(long long x:nums) {
            m = min(m, x);
            M = max(M, x);
        }
        //cout << m << "-" << M;
        return 1LL*(M-m)*k;
    }
};