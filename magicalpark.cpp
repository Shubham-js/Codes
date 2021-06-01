#include<bits/stdc++.h>
using namespace std;
int main() {
	int m, n, k, s;
	cin >> m >> n >> k >> s;
	char a[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	string ans = "No";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s >= k)
			{
				if (a[i][j] == '.')
				{
					s -= 2;
				}
				else if (a[i][j] == '*')
				{
					s += 5;
				}
				else {
					break;
				}
			}
			else
			{
				cout << ans << endl;
				break;
			}
			if (j != n - 1)
			{
				s--;
			}
		}
		if (s < k)
		{
			break;
		}





	}
	if (s >= k)
	{
		cout << "Yes" << endl;
		cout << s;
	}
}