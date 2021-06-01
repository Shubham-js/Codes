#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>s;
int k = 0;
void xyz(int n, int i, vector<int>v, int x, vector<int>p)
{
	if (i == n)
	{
		if (p.size() > 0) {
			int y = p.size();
			if (y % 2 == 0)
			{
				y = (y / 2) - 1;
			}
			else
			{
				y /= 2;
			}
			if (p[y] == x)
			{
				s.push_back(p);

			}
		}
		return;
	}
	if (p.size() > 0)
	{
		int y = p.size();
		if (y % 2 == 0)
		{
			y = (y / 2) - 1;
		}
		else
		{
			y /= 2;
		}
		if (p[y] == x)
		{
			s.push_back(p);

		}

	}

	for (int j = i; j < n - k; j++)
	{

		p.push_back(v[j]);
		k++;
		xyz(n, j + 1, v, x, p);
		p.pop_back();
		k--;


	}
	return;



}
int medianSubsets(int n, vector<int>v, int x)
{
	vector<int>p;
	xyz(n, 0, v, x, p);
	for (auto i : s)
	{
		for (auto j : i)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
int main()
{
	int n;
	cin >> n;
	vector<int>v;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	int x;
	cin >> x;
	cout << medianSubsets(n, v, x) << endl;
	return 0;

}