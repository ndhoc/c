#include <iostream>
using namespace std;

int main() {
    int n,a[1000]; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int demMax = 0;
    int aMax = a[0];
    for (int i = 0; i < n; i++) {
        int dem = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                dem++;
            }
        }
        if (dem > demMax){
            demMax = dem;
            aMax = a[i];
        }
        else if (dem == demMax && a[i] > aMax) {
            aMax = a[i];
        }
    }
    cout << aMax;
    return 0;
}