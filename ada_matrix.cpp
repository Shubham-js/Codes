#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	int output = 0;

	cin >> t;

	while (t--) {
		cin >> n;
		int a[n][n];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		int c = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			if (a[0][i] != i + 1)
			{
				c++;
				for (int j = 0; j < i; j++)
				{

					swap(a[0][j], a[j][0]);


				}
			}
		}

		cout << c << endl;
	}
	return 0;

}


