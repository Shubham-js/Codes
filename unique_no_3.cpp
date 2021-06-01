#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int ans = 0;
	for (int j = 0; j < n; j++)
	{	int c = 0;
		for (int i = 0; i < n; i++)
		{
			if ((a[i] & 1) >= 1)
			{
				c++;

			}
			a[i] = a[i] >> 1;
		}
		int x = c % 3;
		ans = ans + pow(2, j) * x;
	}
	cout << ans << endl;
}