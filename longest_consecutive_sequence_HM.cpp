#include<bits/stdc++.h>
using namespace std;
int longest_consecutive(int*a, int n)
{

	unordered_map<int, int>m; //stored number as key and sequence as value
	for (int i = 0; i < n; i++)
	{
		int no = a[i];

		if (m.count(no - 1) == 0 and m.count(no + 1) == 0)
		{
			m[no] = 1;
		}
		else if (m.count(no - 1) > 0 and m.count(no + 1) > 0)
		{
			int len1 = m[no - 1]; //old streak length of left side of the value
			int len2 = m[no + 1]; //old streak value of right side of the value
			int streak = len2 + 1 + len1;

			m[no - len1] = streak;
			m[no + len2] = streak;
		}
		else if (m.count(no - 1) and !m.count(no + 1))
		{
			int len = m[no - 1];
			m[no - len] = len + 1;
			m[no] = len + 1;
		}
		else
		{
			int len2 = m[no + 1];
			m[no + len2] = len2 + 1;
			m[no] = len2 + 1;
		}

	}
	int longest = 0;
	for (auto x : m)
	{
		longest = max(longest, x.second);
	}
	return longest;
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cout << longest_consecutive(a, n) << endl;
	return 0;
}