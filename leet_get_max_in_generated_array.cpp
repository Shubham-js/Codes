#include <bits/stdc++.h>
using namespace std;
int main()
{
	int v[105] = {0};
	int n;
	cin >> n;
	if (n == 0 or n == 1)
	{
		cout << n << endl;
	}
	else {

		v[0] = 0;
		v[1] = 1;
		int i = 1;
		int m = 1;
		while (2 * i + 1 <= n)
		{
			v[2 * i] = v[i];
			v[2 * i + 1] = v[i] + v[i + 1];
			m = max(m, max(v[2 * i], v[2 * i + 1]));
			i++;
		}
		for (auto x : v)
		{
			cout << x << " ";
		}

		cout << m << endl;
	}
	return 0;
}