#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double r;
    double pi=3.14;
    cin>>r;
    double dt = pi*r*r;
    cout <<fixed<<setprecision(2)<<dt<<endl;
}