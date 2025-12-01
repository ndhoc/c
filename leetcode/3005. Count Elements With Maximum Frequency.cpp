class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int cnt[101]={0};
        int m=0,c=0;
        for(int i=0; i<nums.size(); ++i){
            cnt[nums[i]]++;
            m=max(m,cnt[nums[i]]);
        }
        for(int i=0; i<=100; ++i){
            if(cnt[i]==m) c++;
        }
        return m*c;
    }
};
