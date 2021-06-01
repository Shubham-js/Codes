#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	void sorted(vector<vector<int>>&v, int i, int j)
	{	vector<int>x;
		int r = v.size();
		int c = v[0].size();
		int t = i;
		int u = j;
		while (i < r and j < c)
		{
			x.push_back(v[i][j]);
			i++;
			j++;

		}
		int a = 0;
		sort(x.begin(), x.end());
		while (t < r and u < c)
		{
			v[t][u] = x[a];
			a++;
			t++;
			u++;

		}

	}
	vector<vector<int>> diagonalSort(vector<vector<int>>&v) {

		int r = v.size();
		int c = v[0].size();
		for (int i = 0; i < r; i++)
		{
			sorted(v, i, 0);
		}
		for (int j = 0; j < c; j++)
		{
			sorted(v, 0, j);
		}
		return v;
	}
};
int main()
{	Solution s;
	vector<vector<int>>v = {{3, 3, 1, 1}, {2, 2, 1, 2}, {1, 1, 1, 2}};
	// for (int i = 0; i < 3; i++)
	// {
	// 	for (auto y : v[i])
	// 	{
	// 		cout << y << " ";
	// 	}
	// 	cout << endl;
	// }
	// cout << endl;
	vector<vector<int>>x = s.diagonalSort(v);
	for (int i = 0; i < 3; i++)
	{
		for (auto y : x[i])
		{
			cout << y << " ";
		}
		cout << endl;
	}
	return 0;
}