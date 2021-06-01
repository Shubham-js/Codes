#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t, n, k;
	cin >> t;
	while (t--)
	{

		cin >> n >> k;
		ll a[n]; ll c = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		ll i = 0;
		for (; i < n ; i++)
		{
			if (a[i] >= k)
			{
				c++;
				a[i + 1] += a[i] - k;
			}
			if (a[i] < k)
			{
				break;
			}
		}
		if (i == n)
		{
			c += (a[n - 1] - k) / k;
		}
		cout << c + 1 << endl;



	}

	return 0;
}