class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> se(nums.begin(),nums.end());
        while(se.size()>3){
            se.erase(se.begin());
        }
        return se.size()==3 ? *se.begin():*se.rbegin();
    }
};