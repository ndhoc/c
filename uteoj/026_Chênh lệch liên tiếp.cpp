#include <iostream>
#define MAX 1000
#define f1(i,l,r) for(int i=l;i<=r;i++)
#define f2(i,r,l) for(int i=r;i>=l;i--)
using namespace std;

void nhap(int a[], int &n){
    do{
        cin >> n;
    }while(n <= 1 || n > MAX);
    f1(i,1,n){
        cin >> a[i];
    }
}
int chechLech(int a[], int n){
    int val = 0;
    int gtLech = 0;
    f1(i,1,n-1){
        val = abs(a[i+1] - a[i]);
        if(val > gtLech) {
            gtLech = val;
        }
    }
    return gtLech;
}

int main(){
    int n, a[MAX];
    nhap(a,n);
    cout << chechLech(a,n) << endl;
    return 0;
}