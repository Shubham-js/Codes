#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		ll a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		ll min_diff = 0, max_diff = 0;
		ll sum = 0;
		ll i = 0, j = n / 2;
		while (i < n / 2)
		{
			sum += a[i] - a[j];
			j++;
			i++;
		}
		if (sum < 0)
		{
			max_diff = -1 * sum;
		}
		else
		{
			max_diff = sum;
		}
		sum = 0;
		i = n - 1;
		while (i >= 0)
		{
			if (i % 2 != 0)
			{
				sum += a[i];
			}
			else
			{
				sum -= a[i];
			}
			i--;
		}
		if (sum < 0)
		{
			sum *= -1;
		}
		min_diff = sum;
		cout << min_diff << " " << max_diff << endl;
	}
}