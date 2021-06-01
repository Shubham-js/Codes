#include <bits/stdc++.h>
using namespace std;
bool ispossible(int m, int v, int*a, int p)
{
	int x = 0;
	int c = 0;
	for (int i = 0; i < p; i++)
	{
		if (x < v)
		{
			x += a[i];

		}
		else
		{
			//cout << x << endl;
			c++;
			x = 0;
			x += a[i];
		}
	}
	if (x > 0)
	{
		c++;
	}
	if (c <= m)
	{
		cout << c << endl;
		return true;
	}
	return false;
}
int main() {
	int m, p;
	cin >> m >> p;
	int a[p], st[p];
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];



	}
	//sort(a, a + p);
	st[0] = a[0];
	for (int i = 1; i < p; ++i)
	{
		st[i] = st[i - 1] + a[i];
	}

	int s = 0, e = p - 1;
	int ans = 0;
	while (s <= e)
	{
		int mid = (s + e) / 2;
		//cout << st[mid] << endl;
		if (ispossible(m, st[mid], a, p))
		{
			ans = st[mid];
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
	cout << ans << endl;
}