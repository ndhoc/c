#include <iostream>
using namespace std;

int main() {
    int n, m, x, y, a[10][10], b[10][10];
    cin >> n >> m >> x >> y;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            cin >> b[i][j];
        }
    }

    bool check = false;
    for (int i = 1; i <= n - x + 1; i++) {          // Vị trí hàng bắt đầu trong A
        for (int j = 1; j <= m - y + 1; j++) {      // Vị trí cột bắt đầu trong A
            bool var = true;                        // Giả sử B xuất hiện tại vị trí này
            for (int h = 1; h <= x; h++) {          // Duyệt từng hàng của B
                for (int k = 1; k <= y; k++) {      // Duyệt từng cột của B
                    if (a[i + h - 1][j + k - 1] != b[h][k]) {
                        var = false;                // Không khớp
                        break;
                    }
                }
                if (!var) break;                    // Dừng nếu không khớp
            }
            if (var) {                              // Nếu khớp hoàn toàn
                check = true;
                break;
            }
        }
        if (check) break;                           // Dừng nếu đã tìm thấy
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
