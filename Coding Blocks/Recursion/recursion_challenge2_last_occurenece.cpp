#include <bits/stdc++.h>
using namespace std;
int last_occurence(int *a, int n, int k, int i)
{
	if (i == -1)
	{
		return -1;
	}
	if (a[i] == k)
	{
		return i;
	}
	return last_occurence(a, n, k, i - 1);

}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int k;
	cin >> k;
	int last_index = last_occurence(a, n, k, n - 1);
	cout << last_index << endl;
	return 0;

}