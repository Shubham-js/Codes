#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool compare(pair<ll, ll>a, pair<ll, ll>b)
{

	return a.second < b.second;
}

int main() {
	ll n;
	cin >> n;
	ll a[n];
	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	map<ll, ll>m; //for value and latest position
	vector<pair<ll, ll>>v;
	ll count = 0;
	for (ll i = 0; i < n; ++i)
	{
		m[a[i]] = ++count;

	}
	for (auto i : m)
	{
		v.push_back(i);
	}
	sort(v.begin(), v.end(), compare);
	for (auto i : v)
	{
		cout << i.first << " ";
	}
}