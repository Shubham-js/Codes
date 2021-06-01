#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int x[n];
		int y[n];
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			cin >> y[i];
		}
		for (int i = 0; i < n - 1; i++)
		{

			if (y[i] > y[i + 1])
			{
				//cout << y[i];
			}
			else
			{
				//cout << y[i + 1];
			}
		}
		cout << max(y[0], y[n - 1]);
		//sum += abs(x[0] - x[n - 1]) * max(y[0], y[n - 1]);
		//cout << sum << endl;

	}
}