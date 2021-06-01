#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int k, q;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> q;
		auto lb = lower_bound(a, a + n, q);
		auto ub = upper_bound(a, a + n, q);
		if (a[lb - a] == q)
			cout << lb - a << ' ' << ub - a - 1 << endl;
		else
			cout << -1 << " " << -1 << endl;

	}
	return 0;
}