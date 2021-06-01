#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

	unordered_map<int, int>m;
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i];
		m[a[i]] = i;

	}
	ll num = n;
	if (k >= n)
	{
		for (int i = 0; i < n; ++i)
		{
			a[i] = num;
			num--;
		}
	}
	else {
		while (k > 0)
		{
			ll best_pos = n - num;
			//cout << best_pos << endl;

			ll pos = m[num];

			if (pos != best_pos)
			{
				swap(a[pos], a[best_pos]);
				m[num] = best_pos;
				m[a[pos]] = pos;

				k--;

			}
			num--;



		}
	}
	for (auto i : a)
	{
		cout << i << " ";
	}
	return 0;
}