#include <iostream>
#define MAX 1000
#define f1(i,l,r) for(int i=l;i<=r;i++)
#define f2(i,r,l) for(int i=r;i>=l;i--)
using namespace std;

void nhap(int a[], int &n){
    cin >> n;
    f1(i,1,n){
        cin >> a[i];
    }
}

int doanCon(int a[], int n){
    int doDai = 0;
    int doDaiMax = 0;
    f1(i,1,n){
        if(a[i]>0){
            doDai++;     
            if(doDai > doDaiMax){
                doDaiMax = doDai;
            }    
        }
        else{
            doDai = 0;
        }
    }
    return doDaiMax;
}

int main(){
    int n, a[MAX];
    nhap(a,n);
    cout << doanCon(a,n) << endl;
    return 0;
}