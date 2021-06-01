#include <bits/stdc++.h>
using namespace std;

int main()
{


	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		cin >> m >> n;
		int arr1[m];
		int arr2[n];
		for (int i = 0; i < m; ++i)

		{
			cin >> arr1[i];

		}
		for (int i = 0; i < n; ++i)
		{

			cin >> arr2[i];
		}




		sort(arr1, arr1 + m);
		sort(arr2, arr2 + n);



		vector<int> v(m);


		auto it = set_intersection(arr1, arr1 + m,
		                           arr2, arr2 + n,
		                           v.begin());



		if (v[0] == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << *(it - 1) - v[0] << endl;
		}
	}
	return 0;
}
