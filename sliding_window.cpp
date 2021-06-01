#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int k;
	cin >> k;
	deque<int>d(k);
	int i = 0;
	for (i = 0; i < k; ++i)
	{
		while (!d.empty() and a[i] > a[d.back()])
		{
			d.pop_back();
		}
		d.push_back(i);
	}
	for (; i < n; ++i)
	{
		cout << a[d.front()] << " ";
		while (!d.empty() and (d.front() <= i - k))
		{
			d.pop_front();
		}
		while (!d.empty() and a[i] >= a[d.back()])
		{
			d.pop_back();
		}
		d.push_back(i);

	}
	cout << a[d.front()] << " ";
	return 0;
}