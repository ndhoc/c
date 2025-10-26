#include <iostream>
#define MAX 1000
#define f1(i,l,r) for(int i=l;i<=r;i++)
#define f2(i,r,l) for(int i=r;i>=l;i--)
using namespace std;

void nhap(int a[], int &n){
    do{
        cin >> n;
    } while(n < 1 || n > MAX);
    f1(i,1,n){
        cin >> a[i];
    }
}

bool dx(int a[], int n){
    f1(i,1,n/2){
        if(a[i] != a[n-(i-1)]){
            return false;
        }
    }
    return true;
}

int main(){
    int n, a[MAX];
    nhap(a,n);
    if(dx(a,n)){cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
    return 0;
}