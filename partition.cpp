#include<bits/stdc++.h>
using namespace std;
void partition(int*a, int s, int e, int i)
{
	for (int j = s; j < e; ++j)
	{
		if (a[j] <= a[i])
		{
			swap(a[j], a[i]);
			i++;
		}
		swap(a[i + 1], a[e - 1]);
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	partition(arr, 0, n, 6);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}