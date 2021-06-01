#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t, n, k;
	cin >> t;
	while (t--)
	{

		cin >> n >> k;
		ll a[n], sum = 0;

		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		if (a[0] < k)
		{
			cout << 1 << endl;
		}
		else if (sum < k)
		{
			cout << 1 << endl;
		}
		else
		{
			ll ans = sum / k;
			ans++;
			cout << ans << endl;
		}


	}
	return 0;
}