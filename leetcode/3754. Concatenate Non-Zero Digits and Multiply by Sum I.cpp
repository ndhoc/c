class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> ans;
        long long sum =0;
        while (n!=0){
            int tmp = n%10;
            if(tmp!=0) ans.push_back(tmp);
            sum+=tmp;
            n/=10;
        }
        long long nums=0;
        for(int i=ans.size()-1; i>=0; --i){
            nums=nums*10+ans[i];
        }
        return nums*sum;
    }
};
