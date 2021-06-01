#include<bits/stdc++.h>
using namespace std;

int top_down(int n, int *dp)
{
	//base case
	if (n == 1)
	{
		return 0;
	}
	if (dp[n] != 0)
	{
		return dp[n];
	}


	if (n % 3 == 0)
		int a = top_down(n / 3, dp);
	else
		a = INT_MAX;
	if (n % 2 == 0)
		int b = top_down(n / 2, dp);
	else
		b = INT_MAX;

	int c = top_down(n - 1, dp);
	dp[n] = min(a, min(b, c));

}

int main() {
	int n;
	cin >> n;
	int dp[100] = {0};
	int a = top_down(int n, int*dp);
	cout << a << endl;
	int b = bottom_up(int n);
	cout << b << endl;
}