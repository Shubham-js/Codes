#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n], l[n] = {0}, r[n] = {0};
	int ml = 0, mr = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		ml = max(a[i], ml);
		l[i] = ml;
		cout << l[i] << " ";
	}
	cout << endl;

	for (int i = n - 1; i >= 0; i--)
	{
		mr = max(a[i], mr);
		r[i] = mr;
	}
	for (int i = 0; i < n; i++)
		cout << r[i] << " ";


	cout << endl;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += min(l[i], r[i]) - a[i];
	}
	cout << sum;

}