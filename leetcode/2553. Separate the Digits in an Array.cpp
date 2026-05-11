class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0; i<(int)nums.size(); ++i){
            string x = to_string(nums[i]);

            for(char s : x) ans.push_back(s - '0');
        }
        return ans;
    }
};