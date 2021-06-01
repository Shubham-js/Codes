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
	int diff;
	cin >> diff;
	sort(a, a + n);
	int i = 0, j = i + 1, c = 0;
	while (j < n)
	{

		//cout << "i is " << a[i] << " j is " << a[j] << endl;

		if (a[j] - a[i] >= diff)
		{
			c++;
			//cout << c << endl;
			j++;
			i++;
			//cout << a[j] << " " << a[i] << endl;
		}
		else if (a[j] - a[i] < diff)
		{
			j++;
		}

	}
	cout << c << endl;
	return 0;
}