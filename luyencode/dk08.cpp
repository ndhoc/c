#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b; char c; cin >> a >> c >> b;
    if(c == '+') cout << fixed << setprecision(2) << (a+b);
    else if(c == '-') cout <<fixed << setprecision(2) << (a-b);
    else if(c == '*') cout << fixed << setprecision(2) << a*b;
    else if(c == '/')
    if(b == 0) cout << "Math Error";
    else cout << fixed << setprecision(2) << a/b;
    return 0;
}
