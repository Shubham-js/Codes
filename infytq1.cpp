#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;


	vector<int>v;
	for (int i = 0; i < s.length(); i++)
	{
		int x = s[i];
		if (x >= 48 and x <= 57)
		{
			v.push_back(x - 48);

		}


	}
	sort(v.begin(), v.end());

	int idx = -1;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2 == 0)
		{

			idx = i;
			break;
		}
	}
	int ans = 0;
	if (idx == -1)
	{
		cout << -1 << endl;
	}
	else
	{
		for (int i = v.size() - 1; i >= 0; i--)
		{
			if (i != idx)
			{
				ans = ans * 10 + v[i];
			}
		}
		ans = ans * 10 + v[idx];
		cout << ans << endl;
	}


	return 0;
}