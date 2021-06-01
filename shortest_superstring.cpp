#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	void superstring(vector<string>&s, int i, string x, map<string, int>&m)
	{
		if (i == s.size())
		{

		}
	}
	string shortestSuperstring(vector<string>&s) {
		map<string, int>m;
		for (auto x : s)
		{
			m[x]++;
		}
		superstring (s, 0, "", m);
		for (auto x : s)
		{
			cout << x << endl;
		}
		return "";
	}
};
int main()
{
	vector<string>s = {"catg", "ctaagt", "gcta", "ttca", "atgcatc"};
	Solution ss;
	cout << ss.shortestSuperstring(s) << endl;
	return 0;

}