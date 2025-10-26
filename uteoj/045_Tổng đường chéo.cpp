#include <bits/stdc++.h>
using namespace std;

int a[105][105];
int main(){
	int n,m,x,y; cin>>n>>m>>x>>y;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			cin >> a[i][j];
		}
	}
	int sum = 0;
	for(int i = x, j = y; i > 0 && j > 0; --i, --j){
		sum += a[i][j];
	}
	for(int i = x + 1, j = y + 1; i <= n && j <= m; ++i, ++j){
		sum += a[i][j];
	}
	for(int i = x, j = y; i >= 1 && j <= m; --i, ++j){
		sum += a[i][j];
	}
	for(int i = x+1, j = y-1; i <= n && j >= 1; ++i, --j){
		sum += a[i][j];
	}
	sum -= a[x][y];
	cout << sum;
	return 0;
}