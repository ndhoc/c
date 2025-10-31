class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<bool> visit(n, false);
        vector<int> ans;
        for(int i=0; i<n; ++i){
            if(visit[nums[i]]) ans.push_back(nums[i]);
            else visit[nums[i]]=true;
        }
        return ans;
    }
};
