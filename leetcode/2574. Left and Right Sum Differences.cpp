class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> l(n), r(n), a(n);
        l[0] = 0; r[n-1] = 0;

        for(int i=1; i<n; ++i) {
            l[i] = l[i-1] + nums[i-1];
            r[n-i-1] = r[n-i] + nums[n-i]; 
        }
        
        for(int i=0; i<n; ++i) {
            a[i] = abs(l[i] - r[i]);
        }
        return a;
    }
};