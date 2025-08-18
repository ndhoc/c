#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int n,m;cin>>n>>m;
    n--;
    m--;
    int r=(n+m)/7*2;
    if((n+m)%7==6) r++;
    if(n==7) r--;
    cout<<m-r+1;
		
	return 0;
}