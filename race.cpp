#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		long a[n];
		cin >> n;
		cin >> a[0];
		long barrier = a[0]; long c = 1;
		for (long i = 1; i < n; i++)
		{
			cin >> a[i];

			if (a[i] <= barrier)
			{
				c++;
				barrier = min(a[i], barrier);
			}
		}
		cout << c << endl;
	}
	return 0;
}