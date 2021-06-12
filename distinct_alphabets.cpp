#include<bits/stdc++.h>
using namespace std;
int distinctAlphabets(vector<int>&v)
{
	vector<int>alpha(26, 0);
	vector<string>s = { "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
	// 0	 1    2      3      4      5       6      7      8    9
	for (int i = 0; i < v.size(); i++)
	{
		char ch = s[v[i]][0];
		cout << ch << endl;
		alpha[ch - 'A'] = 1;

	}
	for (int i = 1; i < v.size(); i++)
	{
		int t = v[i - 1] - 1;
		int a = v[i];
		int l = s[a].length();
		t = t % l;
		char ch = s[a][t];

		alpha[ch - 'A'] = 1;
		cout << ch << endl;
	}
	int ans = 0;
	for (int i = 0; i < 26; i++)
	{

		if (alpha[i] != 0)
		{
			ans++;
		}
	}

	return ans;
}
int main()
{
	string s;
	cin >> s;
	vector<int>v;
	for (int i = 0; i < s.length(); i++)
	{
		v.push_back(s[i] - '0');
		//cout << v[i] << endl;
	}
	cout << distinctAlphabets(v);
	return 0;
}