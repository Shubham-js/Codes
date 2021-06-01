#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void merge(ll *a, ll s, ll e) {
	ll mid = (s + e) / 2;
	ll i = s, j = mid + 1, k = s;
	ll temp[100005];
	while (i <= mid and j <= e)
	{
		if (a[i] < a[j])
		{
			temp[k++] = a[i++];
		}
		else
		{
			temp[k++] = a[j++];
		}
	}
	while (i <= mid)
	{
		temp[k++] = a[i++];
	}
	while (j <= e)
	{
		temp[k++] = a[j++];
	}
	for (ll i = s; i <= e; i++)
	{
		a[i] = temp[i];
	}

}
void merge_sort(ll *a, ll s, ll e) {
	if (s >= e)
	{
		return;
	}
	ll mid = (s + e) / 2;
	merge_sort(a, s, mid);
	merge_sort(a, mid + 1, e);
	merge(a, s, e);


}

int main() {
	ll n;
	cin >> n;
	ll a[n];
	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	merge_sort(a, 0, n - 1);
	for (ll i = 0; i < n; ++i)
	{
		cout << a[i] << " ";

	}

	return 0;

}