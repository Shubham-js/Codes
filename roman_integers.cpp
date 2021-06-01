#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int romanToInt(string s) {
		map<char, int>m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
		int i = 0;
		int sum = 0;
		while (i < s.length() - 1)
		{
			if (m[s[i]] >= m[s[i + 1]])
			{
				sum += m[s[i]];
			}
			else
			{
				sum -= m[s[i]];
			}
			i++;
		}
		sum += m[s[i]];

		return sum;

	}
};
int main()
{
	string s;
	cin >> s;
	Solution ss;
	cout << ss.romanToInt(s) << endl;
	return 0;

}