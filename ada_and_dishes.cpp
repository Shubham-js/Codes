#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--)
	{

		int b1 = 0, b2 = 0;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];

		}
		sort(a, a + n);
		for (int i = n - 1; i >= 0; i--)
		{
			if (b1 <= b2)
			{
				b1 += a[i];
			}
			else
			{
				b2 += a[i];
			}
		}
		cout << max(b1, b2) << endl;


	}
}