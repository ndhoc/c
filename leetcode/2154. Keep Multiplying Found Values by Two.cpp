class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        int ans=original;
        for(int i=0; i<nums.size(); ++i){
            if(ans==nums[i]) ans=ans*2;
        }
        return ans;
    }
};
