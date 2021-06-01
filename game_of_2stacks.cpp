#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> a;
	vector<int>  b;
	int n, m, k, t;
	cin >> t;
	while (t--) {
		cin >> n >> m >> k;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];

		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		cout << n << m << k;
		int sum = 0, i = 0, j = 0, c = 0;
		while (sum <= k and i < n and j < m)
		{
			c++;
			if (a[i] <= b[j])
			{
				sum += a[i];
				i++;
			}
			else
			{
				sum += b[j];
				j++;
			}

		}
		cout << c - 1 << endl;
	}
	return 0;
}