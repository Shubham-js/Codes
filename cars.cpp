#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		if (n == 1)
		{
			cout << 1 << endl;
			continue;
		}
		int c = 1, x = a[0];
		for (int i = 1; i < n; i++)
		{
			if (a[i] <= x) {
				c++;
				x = a[i];
			}
		}
		cout << c << endl;
	}
}