#include<bits/stdc++.h>
using namespace std;
bool sum_to_k(int *a, int n, int i, int sum, int c)
{


	if (i == n)
	{
		if (sum == 0 and c > 0) {

			return true;
		}
		else {
			return false;
		}
	}
	//include

	return sum_to_k(a, n, i + 1, sum, c) + sum_to_k(a, n, i + 1, sum + a[i], c + 1);




}
int main() {
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			/* code */
		}
		if (sum_to_k(a, n, 0, 0, 0))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}