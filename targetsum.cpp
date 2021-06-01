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
	int i = 0, j = n - 1;
	while (i < j)
	{
		int cs = a[i] + a[j];
		if (cs > t)
		{
			j--;
		}
		else if (cs < t)
		{
			i++;
		}
		if (cs == t)
		{
			cout << a[i] << " and " << a[j] << endl;
			i++;
			j--;
		}

	}



	return 0;
}