#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	// vector<int>x={0,1,0,-1};
	// vector<int>y={1,0,-1,0};
	int dfs(vector<vector<int>>&v, int i, int j, vector<vector<int>>&visited)
	{
		visited[i][j] = 1;
		int a = 1, b = 1, c = 1, d = 1;
		if (i + 1 < v.size() and v[i + 1][j] > v[i][j])
		{
			a = 1 + dfs(v, i + 1, j, visited);
		}
		if (j + 1 < v[i].size() and v[i][j + 1] > v[i][j])
		{
			b = 1 + dfs(v, i, j + 1, visited);
		}
		if (i > 0 and visited[i - 1][j] > v[i][j])
		{
			c = 1 + dfs(v, i - 1, j, visited);
		}
		if (j > 0 and visited[i][j - 1] > v[i][j])
		{
			d = 1 + dfs(v, i, j - 1, visited);
		}
		visited[i][j] = 0;
		cout << a << " " << b << " " << c << " " << d << endl;
		return max(a, max(b, max(c, d)));


	}
	int longestIncreasingPath(vector<vector<int>>& v) {
		vector<vector<int>>visited(v.size(), vector<int> (v[0].size(), 0));
		int ans = 1;
		for (int i = 0; i < v.size(); i++)
		{
			for (int j = 0; j < v[i].size(); j++)
			{

				cout << dfs(v, i, j, visited) << endl;
				// for (int k = 0; k < v.size(); k++)
				// {
				// 	for (int l = 0; l < v[i].size(); l++)
				// 	{
				// 		cout << visited[k][l] << " ";
				// 	}
				// 	cout << endl;
				// }


			}
		}
		return 0;
	}
};
int main()
{
	vector<vector<int>>v = {{9, 9, 4}, {6, 6, 8}, {2, 1, 1}};
	Solution s;
	cout << s.longestIncreasingPath(v) << endl;
	return 0;
}