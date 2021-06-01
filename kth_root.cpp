#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll k;
		cin >> k;
		ll s = 1, e = n;
		ll ans = 0;
		while (s <= e)
		{
			ll mid = (s + e) >> 1;
			if (pow(mid, k) <= n)
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
	return 0;


}