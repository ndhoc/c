#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[1000]; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int demXuatHien = 0;
    for (int i = 0; i < n;){
        int dem = 1; //Khai báo số lần xuất hiện của phần tử, khi nó xuất hiện lần đầu tiên thì dem = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i]) {
                dem++;
            }
        }
        if (dem > 2) {
            demXuatHien++;
        }
        i += dem;
        /*
        Giải thích tại sao không có điều kiện thứ 3 của vòng for i, và cách (i+=dem) hoạt động
        --> Mục đích làm điều này để bỏ qua những phần tử đã đếm trước đó, tránh mất thời gian và dễ sai
        a[i] = [-1, 2, 3, 2, 2, 3, -1]
  sort: a[i] = [-1, -1, 2, 2, 2, 3, 3]
        a[j] = [-1, -1, 2, 2, 2, 3, 3]

        Với i = 0, a[i] = -1 (vị trí 0), a[j] = -1 (vị trí 1)  
        giống nhau -> dem = 1+1 = 2;
        Lúc này, i+=dem -> i = i + dem =  0 + 2; --> duyệt tại i = 2; 
        
        Tại i = 2, a[i] = 2 (vị trí 2)
                   a[j] = 2 (vị trí 3)
                   a[j] = 2 (vị trí 4)
        --> dem = 1 + 2 = 3
        Lúc này, i+=dem -> i = i + dem = 2 + 3 = 5

        Tiếp tục cho đến hết vòng lặp.
        */
    }
    cout << demXuatHien;
    return 0;
}