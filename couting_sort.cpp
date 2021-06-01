#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;

	cin >> n;
	int a[n], size = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		size = max(size, a[i]);

	}
	int *freq = new int[size + 1] {0};
	for (int i = 0; i < n; i++)
	{
		freq[a[i]]++;
	}
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		while (freq[i] > 0)
		{
			a[j] = i;
			freq[i]--;
			j++;
		}
	}
	delete freq;
	for (int i = 0; i < n; ++i)

	{
		cout << a[i] << endl;

	}


	return 0;

}