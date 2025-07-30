#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string c[105][105];

string add(string a, string b){
    string res = "";
    int i = a.size() - 1, j = b.size() - 1, z = 0, sum = 0;

    while(i >= 0 || j >= 0 || z > 0){
        int x = (i >= 0 ? a[i--] - '0' : 0);
        int y = (j >= 0 ? b[j--] - '0' : 0);

        sum = x + y + z; // Cộng hai số vào biến nhớ
        res += (sum % 10 + '0'); // Cộng số ở hàng don vị vào
        z = sum / 10; //Lưu biến nhớ
    }
    reverse(res.begin(), res.end());
    return res;
}

string cnk(int n, int k){
    for(int i = 0; i <= n; ++i){
        c[i][0] = c[i][i] = "1";
        for(int j = 1; j <= min(i, k); ++j){
            c[i][j] = add(c[i-1][j-1], c[i-1][j]);
        }
    }
    return c[n][k];
}

int main(){
    int n, k; cin >> n >> k;
    cout << cnk(n, k);
    return 0;
}
