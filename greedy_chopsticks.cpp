#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, d;
	cin >> n >> d;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	int x = a[n - 1];
	int pairs = 0;

	int i = 0;
	while (i < n - 1)
	{
		if (a[i + 1] - a[i] <= d)
		{
			i += 2;
			pairs++;
		}
		else
		{
			i += 1;
		}
	}
	cout << pairs << endl;

}