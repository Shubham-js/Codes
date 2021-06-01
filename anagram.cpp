#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool isAnagram(string s, string t) {
		int a[26] = {0};
		if (t.length() != s.length())
		{
			return false;
		}

		for (int i = 0; i < s.length(); i++)
		{
			int x = s[i] - 97;
			a[x]++;
			int y = t[i] - 97;
			a[y]--;
		}
		for (int i = 0; i < 26; i++)
		{
			if (a[i] != 0)
			{
				return false;
			}
		}
		return true;
	}
};
int main() {
	Solution st;
	string s;
	string t;
	cin >> s >> t;
	cout << st.isAnagram(s, t) << endl;
	return 0;
}