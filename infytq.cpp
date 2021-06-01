#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>>p;
void calculator(vector<int>&v, int i, int x, int y)
{
	if (i == v.size())
	{
		p.push_back({x, y});
		return;
	}
	calculator(v, i + 1, x + v[i], y);
	calculator(v, i + 1, x, y + v[i]);
	return;

}
int main()
{
	string s;
	cin >> s;
	s += ',';
	string x = "";
	vector<int>v;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ',' and s[i] != ' ')
		{
			x += s[i];
		}
		else
		{
			v.push_back(stoi(x));
			x = "";
		}
	}
	calculator(v, 0, 0, 0);
	pair<int, int>ans;
	int diff = INT_MAX;
	for (auto x : p)
	{
		//cout << x.first << " " << x.second << endl;
		if (abs(x.first - x.second) < diff)
		{
			diff = abs(x.first - x.second);
			ans = x;

		}
	}
	// for (auto p : v)
	// {
	// 	cout << p << " ";
	// }
	cout << ans.first << " " << ans.second << endl;
	return 0;
}