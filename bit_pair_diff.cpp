#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const unsigned int M = 1000000007;
int main() {
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;

		ll a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int i = 0, j = n - 1;
		ll ans = 0, c = 0;
		while (i < n)
		{
			if (i < j) {
				c = a[i] ^ a[j];
				ans += __builtin_popcount(c);
				j--;
			}
			if (i == j)
			{
				i++;
				j = n - 1;
			}
		}
		cout << (ans * 2) % M << endl;
	}
}