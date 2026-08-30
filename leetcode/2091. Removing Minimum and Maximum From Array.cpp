class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int imin = 0, imax = 0, vmin = 1e5+1, vmax = -1e5+1, n=nums.size();

        if(n<3) return n;

        for(int i=0; i<n; ++i) {
            if(vmin > nums[i]) {
                vmin = nums[i];
                imin = i;
            }

            if(vmax < nums[i]) {
                vmax = nums[i];
                imax = i;
            }
        }

        if(imin > imax) swap(imin, imax);

        return min({imax + 1, n - imin, imin + 1 + n - imax});
    }
};