// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
// 	//expanding from middle of every character
// 	int palindromeLength(int left, int right, string s)
// 	{

// 		if (s.size() == 0 or left > right)return 0;
// 		while (left >= 0 and right < s.length() and s[left] == s[right])
// 		{
// 			left--;
// 			right++;

// 		}
// 		return right - left - 1;

// 	}
// 	string longestPalindrome(string s) {
// 		int start = 0, end = 0;
// 		if (s.length() == 0)return "";
// 		for (int i = 0; i < s.length(); i++)
// 		{
// 			int l1 = palindromeLength(i, i, s); //for odd length string handling
// 			int l2 = palindromeLength(i, i + 1, s);
// 			int l = max(l1, l2);
// 			if (l > end - start)
// 			{
// 				start = i - ((l - 1) / 2);
// 				end = i + (l / 2);
// 			}
// 		}
// 		// string str = "";
// 		// for (int i = start; i <= end; i++)
// 		// {
// 		// 	str += s[i];
// 		// }
// 		// return str;
// 		return s.substr(start, end);
// 	}
// };
// int main()
// {
// 	Solution p;

// 	string s;
// 	cin >> s;

// 	cout << p.longestPalindrome(s) << endl;
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	string longestPalindrome(string s) {
		int n = s.length();
		vector<vector<int>>dp(n, vector<int>(n, 0));
		int start = 0, end = 0;
		for (int i = 0; i < n; i++)
		{
			start = i;
			end = i;
			dp[i][i] = 1;
		}

		for (int i = 0, j = i + 1; j < n; i++, j++)
		{
			if (s[i] == s[j])
			{
				start = i;
				end = j;
				dp[i][j] = 1;
			}
		}

		for (int growth = 2; growth < n; growth++)
		{
			for (int i = 0, j = i + growth ; j < n; j++, i++)
			{

				if (s[i] == s[j] and dp[i + 1][j - 1] == 1)
				{
					start = i;
					end = j;
					cout << i << " " << j << endl;
					dp[i][j] = 1;
				}
				else
				{
					dp[i][j] = 0;
				}
			}
		}
		// for (int i = 0; i < n; i++)
		// {
		// 	for (int j = 0; j < n; j++)
		// 	{
		// 		cout << dp[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		//cout << start << " " << end << endl;
		return s.substr(start, end - start + 1);
	}
};
int main()
{
	string s = "cbbd";
	Solution ss;
	cout << ss.longestPalindrome(s) << endl;
}