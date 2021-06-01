#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int c = 0;
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> b;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            b.push_back(temp);

        }
        // vector<ll> b;
        int j = 0;
        while (j < m - 1)
        {
            for (int i = 0; i < n; i++)
            {
                b.push_back(b[i]);
            }
            j++;
        }

        int start = 0, end = 0,
            count = 0, sum = b[0];

        while (start < m * n and end < m * n) {

            if (sum <= k) {
                end++;

                if (end >= start)
                    count += end - start;


                if (end < n * m)
                    sum += b[end];
            }

            else {
                sum -= b[start];
                start++;
            }
        }


        cout << count % 1000000007 << endl;

    }
}