// 2

// 7
// noobz 1
// llamas 2
// Winn3rz 2
// 5thwheel 1
// NotoricCoders 5
// StrangeCase 7
// WhoKnows 7

// 3
// ThreeHeadedMonkey 1
// MoscowSUx13 1
// NeedForSuccess 1


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t, n, temp;
	ll a[100005] = {0};
	string s;
	cin >> t;
	while (t--)
	{
		memset(a, 0, sizeof(a));
		cin >> n;

		for (ll i = 1; i <= n; ++i)
		{
			cin >> s;
			cin >> temp;
			a[temp] += 1;

		}
		// for (ll i = 0; i <= n; ++i)
		// {
		// 	if (a[i] != 0)
		// 	{
		// 		cout << i << " " << a[i] << endl;
		// 	}
		// }
		ll  rank = 1, badness = 0;
		for (ll i = 1; i <= n; i++)
		{
			while (a[i])
			{
				badness += abs(rank - i);
				a[i]--;
				rank++;
			}
		}
		cout << badness << endl;

	}
}