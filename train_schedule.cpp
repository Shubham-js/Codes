#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n], d[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> d[i];
	}
	sort(a, a + n);
	sort(d, d + n);


	int i = 0, j = 0, maxplatforms = 0, platforms = 0;

	while (i < n and j < n)
	{
		if (a[i] < d[j])
		{
			//New train has arrived
			platforms++;
			i++;
			maxplatforms = max(platforms, maxplatforms);

		}
		else
		{
			platforms--;
			j++;

		}
	}

	cout << maxplatforms << endl;
}