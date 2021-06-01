#include<bits/stdc++.h>
using namespace std;
int dp[10005];
int calculator(int s, int days, int n)
{
	if (s > n)
	{
		return INT_MAX;
	}

	if (s == n)
	{
		return days;
	}
	if (dp[s] != 0)
	{
		return dp[s];
	}

	return dp[s] = min(calculator(s + 1, days + 1, n), calculator(s * 2, days + 1, n));
}
int minimumTime(int n)
{

	if (n == 1)
	{
		return 1;
	}
	memset(dp, 0, sizeof(dp));
	return calculator(1, 0, n);
}
int main()
{
	int t;
	cin >> t;
	int n;
	while (t--)
	{
		cin >> n;
		cout << minimumTime(n) << endl;
	}
	return 0;
}