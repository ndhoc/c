#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a,b,c; cin>>a>>b>>c;
    double p = (a+b+c)/2.0;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    double r = (a*b*c)/(4*s);
    cout<<fixed<<setprecision(3)<<r;
    return 0;
}