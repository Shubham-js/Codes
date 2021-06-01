#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k, temp;
	cin >> n >> k;
	int a[205] = {0};
	queue<int>q;
	for (int i = 0; i < k; ++i)
	{
		cin >> temp;
		r.push(temp);
		a[temp] += 1;
	}
	int c = 0;
	int mn = 0, m = 0;
	if (k % 2 == 0)
	{
		m = k / 2;
		mn = m - 1;
	}
	else
	{
		m = k / 2;
	}
	int
	for (int i = k; i < n; i++)
	{
		for (int j = 0; j < 205; j++)
		{
			if (a[j] != 0)
			{
				f += a[j];
				if (f > m)
				}
		}
	}

}