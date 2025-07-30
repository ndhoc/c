#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n, r[11];

int main(){
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> r[i];
	}
	sort(r, r+n, greater<int>());
	int ans = 0;
	for(int i = 0; i < n; ++i) ans += pow(r[i], i+1);
	cout << ans*100;
}
