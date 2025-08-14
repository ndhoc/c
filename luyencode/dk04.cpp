#include<bits/stdc++.h>
using namespace std;
double n;
long long t;
int main ()
{
    cin >> n;
    t=n;
    if(abs(n-t)>=0.5 && t>0)
        cout << t+1;
    else cout << fixed << setprecision(0)<< n;
    return 0;
}
