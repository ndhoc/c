#include <iostream>
#include <vector>
using namespace std;

int main(){
    int B, n ,b; cin >> B >> n >> b;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    int cnt = 0, i = 0;
    while (i < n) {
        cnt++; // Cần đặt một trạm phát sóng
        int j = a[i] + 2*b; // Tìm vị trí xa nhất có thể đặt trạm trong phạm vi [houses[i], houses[i] + 2*b]
        while (i < n && a[i] <= j) i++; // Di chuyển tới vị trí xa nhất có thể đặt trạm
    }
    cout << cnt;
    return 0;
}
