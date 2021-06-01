#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	int b[m];
	for (int j = 0; j < m; j++)
	{
		cin >> b[j];
	} int y = 0, c = 0;
	for (int i = m - 1; i >= 0; i--)

	{
		if (n > 0)
		{


			b[i] = b[i] + a[n - 1] + y;
		}
		else
		{
			b[i] = b[i] + y;
		}
		if (b[i] > 9)
		{
			y = b[i] / 10;
			b[i] = b[i] % 10;
			if (i == 0)
			{
				c = y;
			}


		}
		else
		{
			y = 0;
		}

		n--;
	}
	if (c != 0)
	{
		cout << c << ", ";
	}
	for (int i = 0; i < m; i++)
	{
		cout << b[i] << ", ";
	}
	cout << "END" << endl;
}