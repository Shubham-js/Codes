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
	for (int i = 1; i < n; ++i)
	{
		int m = a[i], j = i - 1;
		while (j >= 0  && a[j] > m) {
			a[j + 1] = a[j];
			j -= 1;
		}
		a[j + 1] = m;

	}
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << endl;
	}

}