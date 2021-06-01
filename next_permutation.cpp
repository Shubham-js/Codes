#include<bits/stdc++.h>
using namespace std;
int  main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		if (!next_permutation(a, a + n))
		{
			sort(a, a + n);
		}

		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}



	return 0;
}