/**
 *    newbie: ndhoc
 *    created: 2026-06-12 14:45:01
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<int> a(n);
    int s = 0;
    for(int i=0; i<n; ++i) {cin >> a[i]; s+=a[i];}

    int check = 0;
    for(int i=1; i<n; ++i){
        if(a[i] == -1) {
            if(a[i-1] == 1) check = 1;
            else check = 2;
        }
    }

    if(check == 0) cout << s-1;
    else if(check == 1) cout << s;
    else cout << s+2; 

    return 0;
}