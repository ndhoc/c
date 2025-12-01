class Solution {
public:
    int fib(int n) {
        double a = (1+sqrt(5))/2;
        double b = (1-sqrt(5))/2;
        return (int)((pow(a,n)-pow(b,n))/sqrt(5));
    }
};
