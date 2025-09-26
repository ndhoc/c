class Solution {
public:
    bool checkVar(int n){
        while(n!=0){
            if(n%10==0) return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i < n; i++){
            if(checkVar(i) && checkVar(n-i)) return {i,n-i};
        }
        return {};
    }
};
