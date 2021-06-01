#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t, n;
	cin >> t;

	while (t--)
	{
		cin >> n;
		ll a[1000005], c[1000005];
		int sum;
		memset(c, 0, n);
		c[0] = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
			sum %= n;
			sum = (sum + n) % n;
			c[sum]++;

		}
		ll ans = 0;
		for (int i = 0; i < n; i++)
		{
			ll m = c[i];
			ans += (m * (m - 1)) / 2;
		}
		cout << ans << endl;

	}
	return 0;
}