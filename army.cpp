#include<bits/stdc++.h>
using namespace std;
int position(vector<int>&v, vector, int > &u int i, int j, int c)
{
	if (i > j or j < 0 or i == v.size())
	{
		return 0;
	}
	if (i == j)
	{
		return c;
	}
	if (abs(v[i].first - v[j].first) > v[i].second + v[j].second )
	{
		return max(position(v, i + 1, j, c), max(position(v, i, j - 1, c), position(v, i + 1, j - 1, c + 2)));
	}
	else
	{
		return max(position(v, i + 1, j, c), position(v, i, j - 1, c));
	}


}
int sniper(vector<pair<int, int>>&v, int n)
{
	sort(v.begin(), v.end());
	return position(v, 0, v.size() - 1, 0);

}
int main()
{
	int n;
	cin >> n;
	vector<int>u, v;
	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		u.push_back(y);
		v.push_back(x);

	}
	cout << sniper(v, n);
	return 0;
}