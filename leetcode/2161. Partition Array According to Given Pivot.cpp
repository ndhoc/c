class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> a;

        for(auto x:nums) {
            if(x < pivot) a.push_back(x);
        }

        for(auto x:nums) {
            if(x == pivot) a.push_back(x);
        }

        for(auto x:nums) {
            if(x > pivot) a.push_back(x);
        }

        return a;
    }
};