#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

long long bcnn(int a, int b){
    return (long long)a * b / gcd(a,b);
}

int main(){
    int a, b; cin >> a >> b;
    cout << bcnn(a,b);
    return 0;
}