#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    double s=(a+b+c)/3.0;
    cout<<fixed<<setprecision(1)<<s;
    return 0;
}