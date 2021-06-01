#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

	bool dfs(int i, int j, int r, int c, int mid, vector<vector<int>>&v, vector<vector<int>>&visited)
	{
		if (i == r and j == c)
		{

			return true;
		}
		visited[i][j] = true;
		bool possible = false;

		if (i > 0  and visited[i - 1][j] != true and abs(v[i][j] - v[i - 1][j]) <= mid)
		{
			possible = possible || dfs(i - 1, j , r, c, mid, v, visited);
		}
		if (j > 0 and visited[i][j - 1] != true and abs(v[i][j] - v[i][j - 1]) <= mid)
		{
			possible = possible || dfs(i, j - 1, r, c, mid, v, visited);
		}
		if (i < r and visited[i + 1][j] != true and abs(v[i][j] - v[i + 1][j]) <= mid)
		{
			possible = possible || dfs(i + 1 , j, r, c, mid, v, visited);
		}
		if (j < c and visited[i][j + 1] != true and abs(v[i][j] - v[i][j + 1]) <= mid)
		{
			possible = possible || dfs(i , j + 1, r, c, mid, v, visited);
		}

		return possible;
	}

	int minimumEffortPath(vector<vector<int>>&v) {
		int r = v.size() - 1;
		int c = v[0].size() - 1;
		int s = 0, e = INT_MAX;
		int ans = INT_MAX;
		while (s <= e)
		{
			vector<vector<int>>visited(100, vector<int>(100, 0));
			int mid = s + (e - s) / 2;
			if (dfs(0, 0, r, c, mid, v, visited))
			{
				ans = min(ans, mid);
				e = mid - 1;
			}
			else
			{
				s = mid + 1;
			}

		}
		return ans;

	}
};
int main() {
	Solution s;
	vector<vector<int>>x = {{1, 10, 6, 7, 9, 10, 4, 9}};
	vector<vector<int>>v = {{1, 2, 1, 1, 1}, {1, 2, 1, 2, 1}, {1, 2, 1, 2, 1}, {1, 2, 1, 2, 1}, {1, 1, 1, 2, 1}};
	int ans = s.minimumEffortPath(x);
	cout << ans << endl;
	return 0;
}