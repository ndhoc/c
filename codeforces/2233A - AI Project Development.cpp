/**
 *    newbie: ndhoc
 *    created: 2026-06-10 08:48:39
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db double

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--) {
        db n,x,y,z; cin >> n >> x >> y >> z;
        cout << min(ceil(n/(x+y)), 
                    ceil((n-z*x)/(x+y*10)+z)) << "\n";
    }   
    return 0;
}