#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int mv = 1, lv = 1;
	int c = 1;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n][n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[0][i];
		}
		int time = 1;
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				a[i][j] = (j + 1) + a[0][j] * time;
			}
			time++;

		}




		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < n - 1; i++)
			{
				if (a[i][j] == a[i][j - 1])
				{
					c++;
				}
				else
				{
					lv = min(lv, mv);
					mv = max(c, mv);

				}
			}
		}
		cout << lv << " " << mv << endl;

	}
	return 0;
}
