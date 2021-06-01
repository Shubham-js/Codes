#include<bits/stdc++.h>
using namespace std;
bool symmetric(char a[][32], int p, int q, int n)
{
    for (int i = 0; i < n; i++)
    {
        p = 0, q = n - 1;
        while (p < q) {
            if (a[i][p] != a[i][q] or a[p][i] != a[q][i])
            {
                return false;

            }


            p++;
            q--;



        }



    }
    return true;
}
int main() {
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        char a[32][32];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        //checking (x) row symmentry
        bool ans = symmetric(a, 0, n - 1, n);
        cout << (ans == true ? "YES" : "NO") << endl;


    }
}