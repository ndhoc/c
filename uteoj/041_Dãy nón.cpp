#include <iostream>
#define f1(i,l,r) for(int i = l; i <= r; i++)
#define f2(i,r,l) for(int i = r; i >= l; i--)
using namespace std;

int main(){
    int n, a[1000];
    cin >> n;
    f1(i,1,n){
        cin >> a[i];
    }
    int maxVal = a[1];
    int maxPos = 1;
    f1(i,1,n){
        if(a[i] > maxVal){
            maxVal = a[i];
            maxPos = i;
        }
    }
    bool checkVar = true;
    f1(i,1,maxPos-1){
        if(a[i] > a[i+1]){
            checkVar = false;
            break;
        }
    }
    f1(i,maxPos,n-1){
        if(a[i] < a[i+1]){
            checkVar = false;
            break;
        }
    }
    if(checkVar){cout << "YES" <<endl;}
    else cout << "NO" << endl;
    return 0;
}