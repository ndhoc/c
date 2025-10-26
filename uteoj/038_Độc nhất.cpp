#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> se;
    int n; 
    cin >> n;
    vector<int> s(n); // Declare a vector to store the input values
    for(int i = 0; i < n; ++i){
        cin >> s[i]; // Input the values into the vector
        se.insert(s[i]); // Insert the values into the set
    }
    for(auto it = se.begin(); it != se.end(); ++it){
        cout << *it << " "; // Print the sorted elements of the set
    }
    return 0;
}
