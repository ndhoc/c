#include <iostream>
#include <cmath>
using namespace std;

bool checkSNT(int n) {
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return n > 1;
}

int main() {
	int n; cin >> n;
	if (checkSNT(n)) cout << "YES\n";
	else cout << "NO\n"; 
	return 0;
}