#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int, int> m; int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        m[temp]++;
    }
    int z;
    cin >> z;
    int mv = 0;
    for ( auto x : m) {
        //cout << x.first << ": " << x.second << "\n";
        if (x.second == z)
        {
            cout << x.first << endl;
            break;
        }
    }
    return 0;

}

// 5
// 2 2 1 3 1
// 2

// output: 1