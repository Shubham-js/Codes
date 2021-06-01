#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	int c = 0;
	while (sum != 0)
	{
		bool flag = true;
		for (int i = 0; i < n; ++i)
		{
			if (a[i] % 2 != 0)
			{
				flag = false;
				a[i] = a[i] - 1;
				sum = sum - 1;
				c++;
			}
		}
		if (flag)
		{
			for (int i = 0; i < n; ++i)
			{
				a[i] = a[i] / 2;
				sum = sum - a[i];
			}
			c++;
		}
	}
	cout << c << endl;
}