#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool milegi_scholarship(ll mid, ll x, ll y, ll m, ll n)
{
	if (mid * x <= m + (y * (n - mid)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main() {
	ll n, m, x, y;
	cin >> n >> m >> x >> y;
	ll s = 0, e = n;
	ll ans = 0;
	while (s <= e)
	{
		ll mid = (s + e) >> 1;
		if (milegi_scholarship(mid, x, y, m, n))
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