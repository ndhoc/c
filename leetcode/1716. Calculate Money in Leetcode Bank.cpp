class Solution {
public:
    int totalMoney(int n) {
        int monday=0, ans=0, cur=0;
        for(int i=1; i<=n; ++i){
            if(i%7==1){
                monday++;
                cur=monday;
                ans+=cur;
            }
            else{
                cur++;
                ans+=cur;
            }
        }
        return ans;
    }
};