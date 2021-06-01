#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	ll ans = INT_MIN;
	sort(a, a + n);
	for (ll i = 0; i < n; i++)
	{
		ans = max(ans, a[i] * (n - i));
	}
	cout << ans << endl;

}