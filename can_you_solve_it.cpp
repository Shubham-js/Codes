#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n]; int mx = 0, mn = INT_MAX;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			a[i] = i + a[i];
			mx = max(mx, a[i]);
			mn = min(mn, a[i]);

		}
		//out << mx << " " << mn << endl;
		cout << mx - mn << endl;
	}
}