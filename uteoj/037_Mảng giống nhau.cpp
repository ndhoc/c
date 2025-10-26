#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,a[1000],b[1000];
    bool checkVar = true;
    do {
        cin >> n;
    }while (n < 1 || n > 1000);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])  {
            checkVar = false;
        }
    }
    if (checkVar) {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}