#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t, n, q, query;
	unordered_map<ll, bool>m;
	cin >> t;
	while (t--)
	{
		cin >> n;
		ll temp;
		for (ll i = 0; i < n; ++i)
		{
			cin >> temp;
			m[temp] = true;
		}
		cin >> q;
		while (q--)
		{
			cin >> query;
			if (m[query])
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
		m.clear();

	}
	return 0;
}