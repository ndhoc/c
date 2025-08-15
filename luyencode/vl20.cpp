#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define vt vector
#define pii pair<int,int>
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    op();
    char a,b; cin>>a>>b;
    for(char c=a; c<=b; c++){
        cout<<char(toupper(c))<<" ";
    }
    return 0;
}