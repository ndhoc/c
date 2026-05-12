class Solution {
public:
    int mySqrt(int x) {
        int k;
        if(x==1) return 1;
        for(int i=0; i<x; ++i){
            if(1LL*i*i>x) break;
            k = i;
        }
        return k;
    }
};