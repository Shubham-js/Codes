class Solution {
public:
	map<string, int>p;
	bool check(string s, map<string, int>&m, int i, string str)
	{
		if (i == s.length())
		{
			return m.find(str) != m.end();
		}
		if (p.find(str) != p.end())
		{
			return p[str];
		}

		if (m.find(str) != m.end())
		{
			string x = "";
			x += s[i];
			return p[str] = check(s, m, i + 1, x) or check(s, m, i + 1, str + s[i]) ;
		}

		return p[str] = check(s, m, i + 1, str + s[i]);
	}
	bool wordBreak(string s, vector<string>& wordDict) {
		map<string, int>m;
		for (auto x : wordDict)
		{
			m[x]++;
		}
		// memset(dp," ",sizeof(dp));
		return check(s, m, 0, "");
	}
};