#include <bits/stdc++.h>
using namespace std;
void median(int a[], int n, int b[], int m) {
	int med = (n + m + 1) / 2;
	int odd = 1;
	if ((n + m) % 2 == 0) {
		odd = 0;
	}
	int i = 0, index_a = 0, index_b = 0, ans;
	while (i < med) {
		if (a[index_a] < b[index_b]) {
			ans = a[index_a];
			index_a++;
		} else {
			ans = b[index_b];
			index_b++;
		}
		i++;
	}
	if (!odd) {
		if (a[index_a] < b[index_b]) {
			ans += a[index_a];
		}
		else
			ans += b[index_b];
		ans /= 2;

	}
	cout << ans << endl;
}
int main() {
	int na, nb;
	cin >> na;
	cin >> nb;
	int a[na];
	for (int i = 0; i < na; ++i)
	{
		cin >> a[i];
	}

	int b[nb];
	for (int i = 0; i < nb; ++i)
	{
		cin >> b[i];
	}
	median(a, na, b, nb);
	return 0;
}