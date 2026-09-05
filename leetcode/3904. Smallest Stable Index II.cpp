class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> pfma(n+1), sfmi(n+1);
        pfma[0] = nums[0];
        sfmi[n-1] = nums[n-1]; 

        for(int i=1; i<n; ++i) {
            pfma[i] = max(pfma[i-1], nums[i]);
        }

        for(int i=n-2; i>=0; --i) {
            sfmi[i] = min(sfmi[i+1], nums[i]);
        }

        for(int i=0; i<n; ++i) {
            if(pfma[i]-sfmi[i] <= k) return i;
        }

        return -1;
    }
};