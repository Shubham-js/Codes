#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
		string s1, s2;
		for (int i = 0; i < word1.size(); i++)
		{
			s1 += word1[i];
		}
		for (int i = 0; i < word2.size(); i++)
		{
			s2 += word2[i];
		}
		if (s1.length() != s2.length())
		{
			return false;
		}

		for (int i = 0; i < s1.length(); ++i)
		{
			if (s1[i] != s2[i])
			{
				return false;
			}
		}

		return true;
	}
};
int main() {
	vector<string> v = {"ab", "c"};
	vector<string> u = {"a", "bcd"};
	Solution s;
	if (s.arrayStringsAreEqual(v, u))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	return 0;
}