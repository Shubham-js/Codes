#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n;
	cin >> n;
	ll temp;
	unordered_map<ll, ll>m;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		m[temp]++;


	}
	ll b = INT_MIN, c = 0;
	for (auto it : m)
	{
		ll a = it.second;
		if (a > b) {
			b = a;
			c = it.first;
		}

	}
	cout << c << endl;
}