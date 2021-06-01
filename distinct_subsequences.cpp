#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
class Solution {
public:
	int numDistinct2(string s, string t) {
		int m = s.size();
		int n = t.size();
		long long int ans[m + 1][n + 1];
		ans[0][0] = 1;
		for (int i = 1; i < m + 1; i++) {
			ans[i][0] = 1;
		}
		for (int j = 1; j < n + 1; j++) {
			ans[0][j] = 0;
		}
		for (int i = 1; i < m + 1; i++) {
			for (int j = 1; j < n + 1; j++) {
				if (s[i - 1] == t[j - 1]) {
					ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
				}
				else {
					ans[i][j] = ans[i - 1][j];
				}
			}
		}
		return ans[m][n];
	}
	int distinct_calculator(int i, string s, string t, string ans, int j)
	{
		//base case
		if ( ans == t)
		{
			return 1;
		}
		if (i == s.length())
		{
			return 0;
		}
		if (dp[i][j] != -1)
		{
			return dp[i][j];
		}
		int x = 0, y = 0;
		if (s[i] == t[j])
			x = distinct_calculator(i + 1, s, t, ans + s[i], j + 1);
		y = distinct_calculator(i + 1, s, t, ans, j);
		return dp[i][j] = x + y;
	}
	int numDistinct(string s, string t) {

		return distinct_calculator(0, s, t, "", 0);
	}
};
int main() {
	string  s = "babgbag", t = "bag";
	memset(dp, -1, sizeof(dp));
	Solution ss;
	cout << ss.numDistinct(s, t);

}