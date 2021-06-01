#include<bits/stdc++.h>
using namespace std;
int knapsack_profit(int n, int c, int *w, int *p)
{
	if (c == 0  || n == 0)
	{
		return 0;
	}
	int ans = 0;
	int inc, exc;
	inc = exc = INT_MIN;
	if (w[n - 1] <= c)
	{
		inc = p[n - 1] + knapsack_profit(n - 1, c - w[n - 1], w, p);
	}
	exc = knapsack_profit(n - 1, c, w, p);
	ans = max(inc, exc);
	return ans;
}
int main() {
	int n;
	cin >> n;
	int c;
	cin >> c;
	int w[n], p[n];
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	cout << knapsack_profit(n, c, w, p) << endl;
}