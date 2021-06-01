
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool valid(ll a[], ll k, ll n, ll mid)
{
	ll i = 0, sum = 0, c = 1;
	while (i < n)
	{
		if (a[i] + sum > mid)

		{
			sum = a[i];
			c++;

		}
		else
		{
			sum = sum + a[i];
		}
		i++;
	}
	if (c <= k)
	{
		return true;
	}
	return false;
}
int main() {
	ll k;
	ll n, t;
	cin >> n >> k >> t;
	ll a[n];
	ll e = 0;
	ll s = 0;
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] *= t;
		s = max(a[i], s);
		e += a[i];
	}


	ll ans = 0;
	while (s <= e)
	{
		ll mid = (s + e) >> 1;
		if (valid(a, k, n, mid))
		{
			ans = mid;
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
	cout << ans % 10000003 << endl;
}