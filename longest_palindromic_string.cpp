#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool isPalindrome(string s, int i, int j)
	{
		int p = i, q = j;
		while (p < q)
		{
			if (s[p] != s[q])
			{
				return false;
			}
			p++;
			q--;
		}

		return true;

	}
	int longestPalindrome(string s, int i, int j)
	{
		if (i == j)
		{
			return 1;
		}
		if (s[i] == s[j])
		{
			//cout << s[i] << " " << s[j] << endl;

			if (isPalindrome(s, i, j))
			{

				return (j - i + 1);
			}

		}

		int x = longestPalindrome(s, i + 1, j);
		int y = longestPalindrome(s, i, j - 1);

		return max(x, y);
	}
	int longestPalindrome(string s) {

		int x = longestPalindrome(s, 0, s.length() - 1);

		return x;

	}
};
int main()
{
	Solution p;

	string s;
	cin >> s;

	cout << p.longestPalindrome(s) << endl;
	return 0;
}