#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n], b[n];
	int x = 0, p = 0;
	unordered_map<int, int>m;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		m[x]++;
		//cout << "x " << x << " qty" << m[x] << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		//cout << m.count(x) << " x " << x << endl;
		if (m[x] > 0)
		{

			m[x]--;
			b[p] = x;
			p++;

		}
	}
	sort(b, b + p );
	cout << "[";
	for (int i = 0; i < p - 1; i++)
	{
		cout << b[i] << ", ";
	}
	cout << b[p - 1] << "]" << endl;
	return 0;
}