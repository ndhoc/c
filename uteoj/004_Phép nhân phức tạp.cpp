#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long result = (a * b) % c;
    cout << result << endl;
    return 0;
}
