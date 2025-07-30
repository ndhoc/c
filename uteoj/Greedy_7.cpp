/*
    - Giả sử ta có hai công việc A và B, với F[A] > F[B].
    - Nếu ta thực hiện B trước A, thì khi A được xử lý trên PC, nó phải chờ B hoàn thành, dẫn đến tổng thời gian kết thúc lớn hơn.
    - Nếu ta thực hiện A trước B, thì A hoàn thành trên PC sớm hơn, giúp tối ưu hóa tổng thời gian.
    - Bằng cách sắp xếp theo F[i] giảm dần, ta đảm bảo rằng các công việc có thời gian dài được xử lý sớm, giúp rút ngắn tổng thời gian hoàn thành.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    int n; cin >> n;
    vector<int> j(n), f(n);
    for(int i = 0; i < n; ++i) cin >> j[i] >> f[i];
    sort(f.begin(), f.end(), cmp);
    int tSPc = 0; int time = 0;
    for(int i = 0; i < n; ++i){
        tSPc += j[i];
        time = max(time, tSPc + f[i]);
    }
    cout << time;
    return 0;
}
