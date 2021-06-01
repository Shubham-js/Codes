
// 3
// 3
// 3 9
// 2 8
// 6 9

// 4
// 1 7
// 5 8
// 7 8
// 1 8

// 6
// 7 9
// 0 10
// 4 5
// 8 9
// 4 10
// 5 7




#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool compare(pair<ll, ll>a, pair<ll, ll>b)
{
	return a.second < b.second;
}
int main() {
	ll t;
	cin >> t;
	ll n;

	vector<pair<ll, ll>>v;
	ll temp1, temp2;

	while (t--) {
		cin >> n;
		for (ll i = 0; i < n; ++i)
		{
			cin >> temp1 >> temp2;
			v.push_back(make_pair(temp1, temp2));
		}
		sort(v.begin(), v.end(), compare);
		ll ans = 0;
		ll c = 0;
		for (ll i = 0; i < n; ++i)
		{
			//cout << v[i].first << " " << v[i].second << endl;
			if (c <= v[i].first)
			{
				c = v[i].second;
				ans++;
			}



		}
		cout << ans << endl;
		v.clear();
	}
	return 0;


}