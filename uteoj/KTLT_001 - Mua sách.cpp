/*
   - Xếp mảng giảm dần
   - Cộng phần tử mảng khác khác phần tử thứ ba của mỗi nhóm tức là chỉ số i của các phần tử trong mảng phải không chia hết cho 3, và điều kiện phải là  (i+1) % 3 == 0 vì các nhóm sách được bắt đầu từ 1
   - Sau đó xuất ra sum của cách phần tử khác 3
*/
//code

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long priceBook(vector<int> &book){
    sort(book.rbegin(), book.rend());
    long long sum = 0;
    for(int i = 0; i < book.size(); ++i){
        if((i+1) % 3 != 0) sum += book[i];
    }
    return sum;

}

int main(){
    int n; cin >> n;
    vector<int> book(n);
    for(int i = 0; i < n; ++i) cin >> book[i];
    cout << priceBook(book);
    return 0;
}
