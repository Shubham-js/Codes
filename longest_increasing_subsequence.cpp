#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

	int lengthOfLIS(vector<int>&v) {
		vector<int>dp(v.size(), 1);
		for (int i = 0; i < v.size(); i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (v[i] > v[j])
				{
					dp[i] = max(dp[i], dp[j] + 1);
				}
			}
		}
		int ans = 0;
		for (auto x : dp)
		{
			ans = max(ans, x);
		}
		return ans;
	}
	int lengthOfLIS2(vector<int>&v)
	{
		int n = v.size();
		int dp[n + 1];
		dp[0] = INT_MIN;
		for (int i = 1; i < n + 1; i++)
		{
			dp[i] = INT_MAX;
		}
		for (int i = 0; i < n; i++)
		{
			for (int length = 0; length < n; length++)
			{
				if (v[i] > dp[length] && v[i] < dp[length + 1])
				{
					dp[length + 1] = v[i];


				}
			}
		}
		int lis = 0;
		for (int i = 1; i < n + 1; i++)
		{
			if (dp[i] != INT_MAX)
				lis++;
		}
		return lis;
	}
	int lengthOfLIS3(vector<int>&v)
	{
		int n = v.size();
		int dp[n + 1];
		dp[0] = INT_MIN;
		for (int i = 1; i < n + 1; i++)
		{
			dp[i] = INT_MAX;
		}
		for (int i = 0; i < n; i++)
		{
			int length = upper_bound(dp, dp + n, v[i]) - dp;
			if (v[i] > dp[length - 1] && v[i] < dp[length])
			{
				dp[length] = v[i];



			}
		}
		int lis = 0;
		for (int i = 1; i < n + 1; i++)
		{
			if (dp[i] != INT_MAX)
				lis++;
		}
		return lis;
	}
};
int main() {
	Solution s;
	vector<int>v = { 10, 9, 2, 5, 3, 7, 101, 18};
	cout << s.lengthOfLIS3(v);
	return 0;
}