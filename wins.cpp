#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t; cin >> t;
	while (t--)
	{

		int n;
		cin >> n;
		vector<int> v(n);
		for (auto& a : v)
			cin >> a;
		sort(v.begin(), v.end(), greater<int>());

		int p1 = 0, p2 = 0;
		if (n > 2) p1 += v[0], p2 += v[1] + v[2];
		if (n == 2) p1 += v[0], p2 += v[1];
		if (n == 1) p1 += v[0];
		for (int i = 3; i < n; i++) {
			if (i % 2 != 0) p1 += v[i];
			else p2 += v[i];
		}
		if (p1 == p2) cout << "draw\n";
		if (p1 > p2) cout << "first\n";
		if (p2 > p1) cout << "second\n";
	}

	return 0;
}

