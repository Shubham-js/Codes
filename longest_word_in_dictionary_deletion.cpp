#include<bits/stdc++.h>
using namespace std;
class comparator {
public:
	bool operator()(string x, string y)
	{
		if (x.length() == y.length())
		{
			return x < y;
		}
		return x.length() > y.length();
	}
};
class Solution {
public:

	string findLongestWord(string s, vector<string>&v) {

		sort(v.begin(), v.end(), comparator());
		vector<int>x (26, 0);
		for (int i = 0; i < s.length(); i++)
		{
			x[s[i] - 97]++;
		}

		for (int i = 0; i < v.size(); i++)

		{	vector<int>p(26, 0);

			string z = v[i];
			bool flag = true;
			if (z.length() > s.length())
			{
				continue;
			}
			for (int j = 0; j < z.length(); j++)
			{
				p[z[j] - 97]++;
			}
			for (int j = 0; j < 26; j++)
			{
				if (x[j] - p[j] < 0)
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				return z;
			}



		}
		return "";
	}
};
int main() {
	string s = "aewfafwafjlwajflwajflwafj";

	vector<string>v = {"apple", "ewaf", "awefawfwaf", "awef", "awefe", "ewafeffewafewf"};
	Solution st;
	cout << st.findLongestWord(s, v) << endl;

}