#include<bits/stdc++.h>

#define ll long long



using namespace std;

int main()

{



    ll t, i, j;

    cin >> t;

    while (t--)

    {

        cin >> i >> j;

        if ((j - i) == 1)

            cout << (i & j) << endl;

        else

        {

            cout << max(j & (j - 1), (j - 1) & (j - 2)) << endl;

        }

    }

}