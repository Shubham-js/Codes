#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, a, b;
		cin >> n >> a >> b;
		//ll i=0,j=n;
		// ll ans=INT_MAX;ll p=0;

		ll x = (n * b) / (a + b);
		//cout << x << endl;

		ll xx = 1 + x;
		//cout << xx << endl;

		ll ans = a * x * x + b * (n - x) * (n - x);
		//cout << ans << endl;

		ll anss = a * xx * xx + b * (n - xx) * (n - xx);
		//cout << anss << endl;

		cout << min(ans, anss) << endl;


		//other method

		// while(i<=n)
		// {
		// 	p=a*i*i+b*j*j;
		// 	i++;
		// 	j--;
		// 	ans=min(p,ans);
		// }
		//cout<<ans<<endl;
	}
	return 0;
}