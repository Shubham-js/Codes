#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	vector<int>v;
	cin >> n;

	cin >> k;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);

	}
	for (int i = 0; i < n; i += k)
	{
		int l = i;
		int r = min(i + k - 1, i + n - 1);
		while (l < r)
		{
			swap(v[l++], v[r--]);
		}

	}
	for (auto it : v)
	{
		cout << it << " ";
	}

}
