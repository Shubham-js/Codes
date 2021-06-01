#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		int sum_a = 0, sum_b = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			sum_a += a[i];
		}
		for (int i = 0; i < m; ++i)
		{
			cin >> b[i];
			sum_b += b[i];
		}

		if (sum_a > sum_b)
		{
			cout << "0" << endl;

		}
		else {
			sort(a, a + n);
			sort(b, b + m, greater<int>());
			int i = 0;
			while (i < n and sum_a <= sum_b)
			{
				swap(a[i], b[i]);
				sum_a = sum_a + a[i] - b[i];
				sum_b = sum_b + b[i] - a[i];
				i++;

			}
			if (sum_b >= sum_a)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << i << endl;
			}
		}


	}
}