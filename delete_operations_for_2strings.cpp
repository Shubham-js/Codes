#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int lcs(string x, string y) {
		int m = x.length();
		int n = y.length();
		int dp[m + 1][n + 1];
		for (int i = 0; i < m + 1; i++)
		{
			for (int j = 0; j < n + 1; j++)
			{
				if (i == 0 or j == 0)
					dp[i][j] = 0;
			}
		}


		for (int i = 1; i < m + 1; i++)
		{
			for (int j = 1; j < n + 1; j++)
			{
				if (x[i - 1] == y[j - 1])
				{
					dp[i][j] = 1 + dp[i - 1][j - 1];
				}
				else
				{
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		return dp[m][n];

	}
	int minDistance(string s1, string s2) {

		int ans = s1.length() + s2.length() - 2 * lcs(s1, s2) ;

		return ans ;
	}
};
int main()
{
	string s1 = "sea";
	string s2 = "eat";
	Solution s;
	cout << s.minDistance(s1, s2) << endl;
}