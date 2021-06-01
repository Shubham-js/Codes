#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int optimal_game(vector<int>&v, int i, int j)
{
	if (i > j)
	{
		return 0;
	}
	if (j == i + 1)
	{
		return max(v[i], v[j]);
	}
	if (dp[i][j] != -1)
	{
		return dp[i][j];
	}
	return dp[i][j] = max(v[i] + (min(optimal_game(v, i + 2, j), optimal_game(v, i + 1, j - 1))),
	                      v[j] + (min(optimal_game(v, i, j - 2), optimal_game(v, i + 1, j - 1))));
}
int main() {
	vector<int>v = {1, 5, 233, 7};
	memset(dp, -1, sizeof(dp));
	cout << optimal_game(v, 0, v.size() - 1);

}