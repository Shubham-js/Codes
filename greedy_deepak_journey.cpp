#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll c[n], l[n];
		for (ll i = 0; i < n; ++i)
		{
			cin >> c[i];
		}
		for (ll i = 0; i < n; ++i)
		{
			cin >> l[i];
		}
		ll min_rate = c[0], rate = 0, total = 0;
		rate = c[0] * l[0];
		//minimum cost required to reach station one
		total += rate;
		ll st = 1;
		while (st < n)
		{
			if (min_rate > c[st])
			{
				min_rate = c[st];
			}
			rate = l[st] * min_rate;
			//cout << l[st] << " " << min_rate << endl;
			total += rate;
			st++;
		}
		cout << total << endl;
	}
	return 0;

}