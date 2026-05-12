class Solution {
public:
    bool cmp(const vector<int>& x, const vector<int>& y) {
        if (x[0] != y[0])
            return x[0] < y[0];
        return x[1] < y[1];
    }
    int minimumEffort(vector<vector<int>>& tasks) {
        int n=tasks.size();
        sort(tasks.begin(), tasks.end(), [](const vector<int>& x, const vector<int>& y) {
                return (x[1] - x[0]) < (y[1] - y[0]);
            });
        int ans=0;
        for(auto task:tasks){
            ans = max(ans+task[0],task[1]);
        }
        return ans;
    }
};