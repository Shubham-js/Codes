#include<bits/stdc++.h>
using namespace std;
int binary_recursive(int *a, int s, int e, int key)
{
	if (e >= s)
	{
		int mid = (s + e ) / 2;


		if (a[mid] == key)
		{

			return mid;
		}
		if (a[mid] < key)
		{

			return binary_recursive(a, mid + 1, e, key);
		}
		if (a[mid] > key)
		{
			return binary_recursive(a, s, mid - 1, key);
		}
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	int k;
	cin >> k;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << binary_recursive(a, 0, n - 1, k) << endl;
}