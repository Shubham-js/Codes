#include<bits/stdc++.h>
using namespace std;
int longestsequence(vector<int>& v)
{
	set<int> s;
	for (int i : v)
	{
		s.insert(i);
	}
	int longest = 0;
	for (int num : s)
	{
		if (!s.count(num - 1))
		{
			int current_num = num;
			int current_streak = 1;
			while (s.count(num + 1))
			{
				current_streak++;
				current_num++;
			}
			longest = max(longest, current_streak);

		}
	}
	return longest;
}

int main() {
	int n;
	cin >> n;
	vector<int> v;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	cout << longestsequence(v) << endl;
	return 0;
}
