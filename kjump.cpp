#include <bits/stdc++.h>
using namespace std;
int main() {
	int k, n;
	cin >> k >> n;
	vector<int>a;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		a.push_back(temp);

	}
	vector<int>ans;
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] + k >= a[i])
		{
			ans.push_back(a[i]);
		}
	}
	for (auto i : ans)
	{
		cout << i << " ";
	}
}
// for (int i = 0; i < n; ++i)
// {
// 	cout << a[i] << " ";
// }

