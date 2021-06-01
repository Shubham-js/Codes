#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		ll a[n], sum = 0;
		for (ll i = 0; i < n; ++i)
		{
			cin >> a[i];
			sum += a[i];
		}
		if (2 * k > sum)
		{
			cout << "-1" << endl;
		}
		else
		{
			sort(a, a + n, greater<ll>());
			ll i = 0, mike = 0, tracy = 0, mike1 = 0, tracy1 = 0, j = 0;
			while (i < n and (mike < k or tracy < k))
			{
				if (mike < k and mike <= tracy)
				{
					mike += a[i];
					i++;
				}

				if (i < n) {
					if (tracy < k and tracy <= mike)
					{
						tracy += a[i];
						i++;
					}
				}
				else
				{
					break;
				}
			}

			if (tracy >= k and mike >= k)
			{
				cout << i << endl;
			}
			else
			{
				cout << "-1" << endl;
			}





		}
	}

}