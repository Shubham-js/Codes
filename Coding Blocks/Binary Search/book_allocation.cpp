#include <bits/stdc++.h>
using namespace std;

bool possible(int ar[], int n, int m, int sol) {
	int sum = 0, c = 1;
	for (int i = 0; i < n; ++i)
	{
		if (sum + ar[i] > sol) {
			sum = ar[i];
			c++;
		} else {
			sum += ar[i];
		}
	}
	if (c <= m)
		return true;

	return false;

}
int main(int argc, char const *argv[])
{
	int t, n, m, start, end, mid, ans;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int ar[n];
		end = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> ar[i];
			end += ar[i];
		}
		start = ar[0];
		while (start <= end) {
			mid = (start + end) / 2;
			if (possible(ar, n, m, mid)) {
				ans = mid;
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
		cout << max(ans, ar[n - 1]) << endl;
	}
	return 0;
}