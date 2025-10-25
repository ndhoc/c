class Solution {
public:
    int reverse(long long x) {
        long long ans=0;
        bool negative=false;
        if(x<0){
            x*=-1;
            negative=true;
        }
        while(x!=0){
            ans=ans*10+x%10;
            x/=10;
        }
        if(negative) ans*=-1;
        if(ans<INT_MIN || ans>INT_MAX) return 0;
        return (int)ans;
    }
};