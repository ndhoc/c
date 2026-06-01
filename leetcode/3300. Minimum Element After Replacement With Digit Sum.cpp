class Solution {
public:
    int minElement(vector<int>& nums) {
        int m = 1e4+1;
        for(int i=0; i<nums.size(); ++i){
            int cur = digit_sum(nums[i]);
            m = min(m, cur);
        }
        return m;
    }
private:
    int digit_sum(int num){
        int s = 0;
        while (num>0){
            s += num%10;
            num /= 10;
        }
        return s;
    }
};