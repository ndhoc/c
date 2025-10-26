#include <iostream>
#include <climits>
#define MAX 1000
#define ll long long
#define f1(i,l,r) for(ll i=l;i<=r;i++)
#define f2(i,r,l) for(ll i=r;i>=l;i--)
using namespace std;

void nhap(ll a[], int &n){
    do{
        cin >> n;
    } while(n < 1 || n > MAX);
    f1(i,1,n){
        cin >> a[i];
    }
}

ll maxVal(ll a[], int n){
    ll max1 = a[0];
    ll max2 = INT_MIN;
    f1(i,1,n){
        if(a[i] > max1){
            max1 = a[i];
        }
    }
    f1(i,1,n){
        if(a[i] > max2 && a[i] < max1){
            max2 = a[i];
        }
    }
    return max2;
}

int main(){
    int n;  
    ll a[MAX];
    nhap(a,n);
    cout << maxVal(a,n) <<endl;
    return 0;
}