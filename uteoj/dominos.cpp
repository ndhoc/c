/**
 *    newbie: ndhoc
 *    created: 2026-06-20 10:00:10
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

string add(string a, string b) {
    ll carry = 0, sum = 0;

    string ans;

    for(int i=0; i<max(a.size(), b.size()); ++i) {
        if(a.size() == b.size()) break;
        else if(a.size() < b.size()) {
            a = '0' + a;
        } else {
            b = '0' + b;
        }
    }

    ans = a;

    for(int i=a.size()-1; i>=0; --i) {
        sum = a[i] - '0' + b[i] - '0' + carry;
        carry = sum / 10;
        ans[i] = sum % 10 + '0';
    }

    if(carry == 1) ans = '1' + ans;

    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<string> fib(n+1);
    fib[0] = "1", fib[1] = "1";

    for(int i=2; i<=n; ++i) {
        fib[i] = add(fib[i-1], fib[i-2]);
    } 

    cout << fib[n];
    return 0;
}