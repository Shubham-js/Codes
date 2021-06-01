#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int countSubstrings(string s) {
		vector<vector<bool>>dp(s.length(), vector<bool>(s.length(), false));
		//single characters are all true for palindromes
		//g is growth part that is the diagonals
		//considering the rows as the starting character and colums as the ending ones.
		int c = 0;
		for (int g = 0; g < s.length(); g++)
		{
			for (int i = 0, j = g; j < s.length(); i++, j++)
			{
				if (g == 0)
				{
					dp[i][j] = true;
					c++;
				}
				else if (g == 1)
				{
					if (s[i] == s[j])
					{
						dp[i][j] = true;
						c++;
					}
					else
					{
						dp[i][j] = false;
					}
				}
				else
				{
					if (s[i] == s[j] and dp[i + 1][j - 1] == true) {
						dp[i][j] = true;

						c++;
					}
					else
						dp[i][j] = false;
				}
			}
		}

		return c;
	}
};
int main()
{
	string ss = "abccbc";
	Solution s;
	cout << s.countSubstrings(ss) << endl;
	return 0;
}