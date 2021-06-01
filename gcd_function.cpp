#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int m = n;
		int f = 1, x = 1;
		for (int i = 1; i <= n; i++)
		{
			if (m % i == 0 and m > 0)
			{
				f = i * f;
				m = m / i;
			}

			x = x * i;

		}
		//cout << f << endl;
		int sum1 = 0, sum2 = 0;
		for (int i = 1; i <= n; i++)
		{
			sum1 += gcd(f, i);
			sum2 += gcd(x, i);
		}
		if (sum1 > sum2)
		{
			cout << sum1 << " " << f << endl;
		}
		else
		{
			cout << sum2 << " " << x << endl;
		}

	}
}