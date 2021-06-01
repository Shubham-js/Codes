#include <bits/stdc++.h>
using namespace std;
bool beggar(pair<string, int>a, pair<string, int>b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second > b.second;
}
int main() {
	int c;
	cin >> c;
	int n;
	cin >> n;
	vector<pair<string, int>>v;
	string name;
	int sal;
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		cin >> sal;
		if (sal >= c)
		{
			v.push_back(make_pair(name, sal));
		}

	}
	sort(v.begin(), v.end(), beggar);
	for (auto i : v)
	{
		cout << i.first << " " << i.second << endl;
	}

}