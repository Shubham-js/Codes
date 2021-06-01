#include <bits/stdc++.h>
#define lli long long int
using namespace std;

bool possible(lli ar[], int n, int c, lli sol) {
	lli sum = ar[0]; int a = 1;
	for (int i = 1; i < n; ++i)
	{
		if (sum + sol <= ar[i]) {
			a++;
			sum = ar[i];
		}
	}
	if (a >= c)
		return true;

	return false;

}
int main(int argc, char const *argv[])
{
	int n, c;
	lli xi, start, end, mid, ans;
	cin >> n >> c;
	lli ar[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> ar[i];
	}
	start = 1, end = ar[n - 1];
	sort(ar, ar + n);

	while (start <= end) {
		mid = (start + end) / 2;
		if (possible(ar, n, c, mid)) {
			ans = mid;
			start = mid + 1;
		} else {
			end = mid - 1;

		}
	}
	cout << ans << endl;

	return 0;
}