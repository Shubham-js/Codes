#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100];
	int c[100] = {0};
	int m = 0, cs = 0;
	int n;
	cin >> n;
	cin >> a[0];
	c[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		c[i] = c[i - 1] + a[i];
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{	cs = 0;
			cs = c[j] - c[i - 1];


			if (cs > m)
			{
				m = cs;
			}
		}
	}
	cout << m << endl;
}