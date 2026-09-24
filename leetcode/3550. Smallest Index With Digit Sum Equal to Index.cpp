class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = (int) nums.size(), ans = -1;

        for(int i=0; i<n; ++i) {
            int s = 0, num = nums[i];

            while(num > 0) {
                int r = num % 10;
                s += r;
                num /= 10;
            }

            if(s == i) {
                if(ans == -1) ans = max(ans, i);
                else ans = min(ans, i);
            }
        }
        return ans;
    }
};