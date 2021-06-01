#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		ll x, y;
		cin >> x, y;
		ll q;
		cin >> q;
		while (q--)
		{
			ll a, b;
			cin >> a, b;
			a = a - x;
			b = b - y;
			cout << a << b;

		}


	}
}