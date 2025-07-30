//gpt
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ts{
    int s, b, r;
};

bool checkVar(ts a, ts b){
    return (a.b + a.r) > (b.b + b.r);
}

int main(){
    int n; cin >> n;
    vector<ts> nts(n);
    for(int i = 0; i < n; ++i) cin >> nts[i].s >> nts[i].b >> nts[i].r;
    sort(nts.begin(), nts.end(), checkVar);
    int hetBoi = 0, time = 0;
    for(int i = 0; i < n; ++i){
        hetBoi += nts[i].s;
        time = max(time, hetBoi + nts[i].b + nts[i].r);
    }
    cout << time;
    return 0;
}
