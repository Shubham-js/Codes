#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while (t--)
	{
		long long int x, y, k, n;

		cin >> x >> y >> k >> n;

		if (abs(x - y) % (2 * k) == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}
