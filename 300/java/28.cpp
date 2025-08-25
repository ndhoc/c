#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c; cin>>a>>b>>c;
    double tb=((a+b)*2+c)/5;
    cout<<fixed<<setprecision(1)<<tb;
    return 0;
}