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
	ll c = 0, mc = INT_MIN, m2 = INT_MIN, f = 0, d = 0, x = 0, y = 0, mv = 0, z = 0;
	for (ll i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			c++;

		}
		else
		{
			if (c > mc)
			{
				mc = c;

			}
			c = 0;
		}
		if (a[i] == 2)
		{
			d++;

		}
		else
		{
			if (d > m2)
			{
				m2 = d;
				f = i - d;

			}
			d = 0;

		}
		if (a[i] == 1)
		{
			x++;
		}
		else
		{
			y++;
		}
		if (x == y)
		{
			if (x + y > mv)
			{
				mv = x + y;
				z = i - x - 1;
			}
			x = 0;
			y = 0;

		}

	}
	cout << mc << " " << f << " " << mv << " " << z << endl;
	return 0;

}