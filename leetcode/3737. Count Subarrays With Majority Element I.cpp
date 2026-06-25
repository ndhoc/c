class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ps(n+1, 0);

        for(int i=0; i<n; ++i) {
            ps[i+1] = ps[i] + (nums[i] == target ? 1:-1);
        }

        int ans = 0;

        for(int i=0; i<=n; ++i) {
            for(int j=i+1; j<=n; ++j) {
                ans += (ps[j] > ps[i]);
            }
        }

        return ans;
    }
};