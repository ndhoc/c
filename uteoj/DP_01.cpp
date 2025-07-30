//Liem giai

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> f(n + 1), l(n + 1), h(n + 1);

    for(int i = 1; i <= n; ++i) cin >> l[i];
    for(int i = 1; i <= n; ++i) cin >> h[i];
	
	f[0] = 0;
	for(int i = 1; i <= n; ++i){
		if (i == 1){f[i] = f[i - 1] + l[i]; continue;}
		f[i] = max(h[i] + f[i-2],l[i] + f[i-1]);
	}
	
	cout << f[n];

    return 0;
}
