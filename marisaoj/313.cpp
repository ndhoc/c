/**
 *    newbie: ndhoc
 *    created: 2026-06-02 20:34:21
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long ans = 0;

    for (char c : s) {
        ans = ans * 2 + (c - '0');
    }

    cout << ans;

    return 0;
}