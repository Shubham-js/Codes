#include<bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n, vector<int>&v)
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }


    for (int p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
}

vector<int> primesum(int n) {
    vector<int>v;
    SieveOfEratosthenes(n, v);
    int i = 0, j = v.size() - 1;
    vector<int>x;
    while (i <= j)
    {
        if (v[i] + v[j] == n)
        {
            //cout << v[i] << " " << v[j] << endl;
            x.push_back(v[i]);
            x.push_back(v[j]);
            return x;
        }
        else if (v[i] + v[j] > n)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return x;
}
int main()
{
    int n;
    cin >> n;
    vector<int>v = primesum(n);
    cout << v[0] << " " << v[1] << endl;
}
