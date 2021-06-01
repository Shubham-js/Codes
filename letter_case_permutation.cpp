#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	void LCP(char *ch, char*op, int i, vector<string>&v)
	{
		if (ch[i] == '\0')
		{
			op[i] = '\0';
			v.push_back(op);
			return;
		}
		if (ch[i] >= 65 and ch[i] <= 90)
		{
			op[i] = ch[i] + 32;

			LCP(ch, op, i + 1, v);
		}
		else if (ch[i] >= 97 and ch[i] <= 122)
		{
			op[i] = ch[i] - 32;

			LCP(ch, op, i + 1, v);
		}
		op[i] = ch[i];
		LCP(ch, op, i + 1, v);
		return;

	}


	vector<string> letterCasePermutation(string s) {
		char ch[s.length() + 1];
		char op[s.length() + 1];
		strcpy(ch, s.c_str());
		vector<string>v;
		LCP(ch, op, 0, v);
		return v;
	}
};
int main() {
	string st;
	cin >> st;
	Solution s;
	vector<string>v = s.letterCasePermutation(st);
	for (auto x : v)
	{
		cout << x << " ";
	}
	return 0;
}