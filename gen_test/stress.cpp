#include <bits/stdc++.h>
using namespace std;

mt19937 rng(7405);

int rnd(int l, int r) {
    return rng() % (r - l + 1) + l;
}

void genTest() {

    ofstream inp("input.txt");

    int T = rnd(1, 5);

    inp << T << '\n';

    while(T--) {

        int A = rnd(1, 1000);
        int B = rnd(1, 1000);

        if(A > B) swap(A, B);

        inp << A << ' ' << B << '\n';
    }

    inp.close();
}

bool check() {

    ifstream f1("out.txt");
    ifstream f2("ans.txt");

    vector<int> a, b;

    int x;

    while(f1 >> x) a.push_back(x);
    while(f2 >> x) b.push_back(x);

    return a == b;
}

int main() {

    for(int test = 1; ; test++) {

        genTest();

        system("prime.exe");
        system("prime_trau.exe");

        if(!check()) {

            cout << "WA at test " << test << '\n';

            ifstream inp("input.txt");

            string line;

            cout << "\nFailing test:\n";

            while(getline(inp, line))
                cout << line << '\n';

            return 0;
        }

        cout << "AC test " << test << '\n';
    }
}