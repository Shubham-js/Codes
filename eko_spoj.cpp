#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool cutting(ll a[], ll n, ll m, ll mid)
{	ll  i = 0, sum = 0;
	while (i < n)
	{
		if (a[i] > mid)
		{
			sum  = sum + ( a[i] - mid);
		}

		i++;
	}
	if (sum >= m)
	{
		return true;

	}
	return false;
}
int main() {


	ll n, m;
	cin >> n >> m;
	ll a[n];
	ll s = 0, e = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

		e = max(e, a[i]);

	}
	ll ans = 0; ll mid = 0;
	while (s <= e)
	{
		mid = (s + e) / 2;
		if (cutting(a, n, m, mid))
		{
			ans = mid;
			s = mid + 1;
		}
		else
		{
			e = mid - 1;
		}
	}
	cout << ans << endl;

}