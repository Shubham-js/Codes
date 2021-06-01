#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t;
	ll n, r;
	cin >> t;
	while (t--)
	{

		cin >> n >> r;
		vector<ll> v; ll temp;
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			v.push_back(temp);
		}
		r = r % n;
		rotate(v.begin(), v.begin() + v.size() - r, v.end());
		for (ll i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;

}