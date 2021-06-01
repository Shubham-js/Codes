
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(vector<int> &v)
{

	bool prime[1299721];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= 1299720; p ++)
	{

		if (prime[p] == true)
		{

			for (int i = p * p; i <= 1299720; i += p)
				prime[i] = false;
		}
	}


	for (int p = 2; p <= 1299720; p++)
		if (prime[p])
			v.push_back(p);
}


int main()
{

	vector<int>v;
	SieveOfEratosthenes(v);
	// for (auto it : v)
	// {
	// 	cout << it << " ";
	// }

	int t, n;
	cin >> t;
	while (t--)
	{
		vector<int>a, b;
		cin >> n;
		int d;

		for (int i = 0; i < n; i++)
		{
			cin >> d;
			b.push_back(d);
		}
		// for (auto it : b)
		// {
		// 	cout << it << " ";
		// }
		for (int i = 0; i < n; i++)
		{
			a.push_back(v[i]);
		}

		for (int i = 0; i < n; ++i)
		{
			if (b[i] != i + 1)
			{
				a[i] = a[b[i] - 1];
			}

		}
		for (auto i : a)
		{
			cout << i << " ";
		}
		cout << endl;

	}
	return 0;
}
