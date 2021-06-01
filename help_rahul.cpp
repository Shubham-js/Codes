#include<bits/stdc++.h>
using namespace std;
int find_k(int a[], int n, int k)
{
	int s = 0;
	int e = n - 1;
	while (s <= e)
	{
		int mid = (s + e) >> 1;
		if (a[mid] == k)
		{
			return mid;
		}
		else if (a[s] <= a[mid])
		{
			if (k >= a[s] and k <= a[mid])
			{
				e = mid - 1;
			}
			else
			{
				s = mid + 1;
			}

		}
		else
		{
			if (k >= a[mid] and k <= a[e])
			{
				s = mid + 1;
			}
			else
			{
				e = mid - 1;
			}
		}


	}
	return -1;
}
int main()
{
	int n;

	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int k;
	cin >> k;
	cout << find_k(a, n, k);


}
