#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int t = 0;
		int mx = 0, mn = 100;
		int cnt = 1;
		for (int i = 1; i < n; i++)
		{
			if ((i + 1) + a[i]*t - (i) + a[i - 1]*t <= 0) {
				cnt++;
				mx = max(mx, cnt);
			}
			else {
				mn = min(mn, cnt);
				mx = max(mx, cnt);
				cnt = 1;
			}
			t++;




		}

		mn = min(mn, cnt);
		cout << mn << " " << mx << endl;

	}
	return 0;

}