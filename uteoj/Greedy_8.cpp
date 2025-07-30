#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct vid {
    long long b, t;
};

// So sánh theo tỉ lệ b/t để chọn video tối ưu trước
bool cmp(const vid &a, const vid &b) {
    return (double)a.b / a.t < (double)b.b / b.t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
    int n;
    long long r;
    cin >> n >> r;
    
    vector<vid> vids(n);
    for (int i = 0; i < n; ++i) {
        cin >> vids[i].b >> vids[i].t;
    }

    sort(vids.begin(), vids.end(), cmp); // Sắp xếp theo b/t tăng dần

    long long sumb = 0, sumt = 0;
    for (int i = 0; i < n; ++i) {
        sumb += vids[i].b;
        sumt += vids[i].t;

        // Đổi so sánh để tránh tràn số: sumb / sumt > r
        if ((double)sumb / sumt > r) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
