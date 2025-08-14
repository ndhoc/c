#include <bits/stdc++.h>
using namespace std;

int main(){
    long double a, b; cin >> a >> b;
    if(a == 0){
        if(b == 0) cout << "WOW\n";
        else cout << "NO\n";
    }
    else cout << fixed << setprecision(2) << (-b/a);
    return 0;
}
