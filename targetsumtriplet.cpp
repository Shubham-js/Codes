#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int t;
	cin >> t;
	sort(a, a + n);

	for (int i = 0; i < n - 2; i++) {

		int l = i + 1;
		int r = n - 1;
		while (l < r) {
			if (a[i] + a[l] + a[r] == t) {
				cout << a[i] << ", " << a[l] << " and " << a[r] << endl;
				l++;
				r--;

			}
			else if (a[i] + a[l] + a[r] < t)
				l++;
			else
				r--;
		}
	}
}