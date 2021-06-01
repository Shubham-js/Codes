#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> shortestToChar(string s, char c) {
		vector<int>v;
		vector<int>p;
		int n = s.length();
		for (int i = 0; i < n; i++)
		{
			if (s[i] == c)
			{
				v.push_back(i);
			}
		}
		// for (int i = 0; i < v.size(); i++)
		// {
		// 	cout << v[i] << " ";
		// }
		for (int i = 0; i < n; i++)
		{
			int pos = n - 1;
			int a = 0;

			while (pos >= (int)abs(v[a] - i) and a < v.size())
			{
				pos = (int)abs(v[a] - i);

				a++;
			}
			p.push_back(pos);
		}

		return p;
	}
};
int main() {
	string s = "loveleetcode";
	char c = 'e';
	Solution x;
	vector<int>v = x.shortestToChar(s, c);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}