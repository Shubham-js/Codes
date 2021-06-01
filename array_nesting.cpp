#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int arrayNesting2(vector<int>&v)
	{
		int n = v.size();
		bool visited[n] = {0};
		int d = 0;
		for (int i = 0; i < n; i++)
		{
			int c = 0;
			if (!visited[i])
			{
				int start = v[i];
				while (!visited[start])
				{
					visited[start] = true;
					c++;
					start = v[start];

				}

			}
			d = max(c, d);

		}
		return d;
	}
	int arrayNesting(vector<int>&v) {
		int dp[20005] = {0};
		int n = v.size();
		map<int, int>m;
		int d = 0;
		for (int i = 0; i < n; i++)
		{
			int s = i, c = 0;
			if (s == v[i])
			{
				m[s]++;
				dp[s] = 1;
				c++;
			}
			if (dp[s] != 0)
			{
				c += dp[s] - 1;
			}
			else {

				while (m[s] == 0)
				{
					m[s]++;
					c++;
					s = v[s];
				}
				dp[i] = c;

			}
			d = max(c, d);


		}
		return d;

	}
};
int main() {
	Solution s;
	vector<int>v = {5, 4, 0, 3, 1, 6, 2};
	cout << s.arrayNesting2(v) << endl;

	return 0;
}