#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();
	int m,y; cin>>m>>y;
	if(m<1 || m>12 || y <0){
		cout << "INVALID\n";
		return 0;
	}
	int a[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if((y%4==0 && y%100!=0) || y%400==0) a[2]=29;
	cout<<a[m];
	return 0;
}
