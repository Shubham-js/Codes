#include <bits/stdc++.h>
using namespace std;
int longest_substring(string s)
{
	int n = s.length();
	int left = 0, right = 0, length = 0;
	//vector<int> m(256, -1);
	//or
	map<char, int>m;
	while (right < n)
	{
		if (m[s[right]] >= 0) //if using vector then != -1
		{

			left = max(m[s[right]] + 1, left);





		}

		m[s[right]] = right;

		length = max(length, right - left + 1);
		right++;


	}

	return length;
}
int main() {
	string s;
	getline(cin, s);
	int ans = longest_substring(s);
	cout << ans << endl;
}