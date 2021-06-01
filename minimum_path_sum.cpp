#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int dp[201][201] = {0};
	int minPathSum(vector<vector<int>>&v, int i, int j) {
		//base case

		if (i == 0 and j == 0)
		{
			return v[i][j];
		}
		int a, b;
		if (dp[i][j] != 0)
		{
			return dp[i][j];
		}

		if (i > 0)
		{
			a = v[i][j] + minPathSum(v, i - 1, j);
		}
		if (j > 0)
		{
			b = v[i][j] + minPathSum(v, i, j - 1);
		}

		dp[i][j] = min(a, b);
		return dp[i][j];




	}

};
int main() {
	int m, n;
	cin >> m >> n;
	vector<vector<int>>v(m * n);
	int temp = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			v[i].push_back(temp);
		}
	}
	Solution s;
	int ans = s.minPathSum(v, m - 1, n - 1);
	cout << ans << endl;
	return 0;
}