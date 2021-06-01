#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, q;
	cin >> n >> q;
	int arr[n + 1] = {0};
	int a, b, k;
	while (q--)
	{
		cin >> a >> b >> k;
		for (int i = a; i <= b; i++)
		{
			arr[i] += k;
		}

	}
	sort(arr, arr + n);
	cout << arr[n - 1] << endl;



}

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
// 	long int N, K, p, q, sum, i, j, max = 0, x = 0;

// 	cin >> N >> K;
// 	long int *a = new long int[N + 1]();

// 	for (i = 0; i < K; i++)
// 	{
// 		cin >> p >> q >> sum;
// 		a[p] += sum;
// 		if ((q + 1) <= N) a[q + 1] -= sum;
// 	}

// 	for (i = 1; i <= N; i++)
// 	{
// 		x = x + a[i];
// 		if (max < x) max = x;

// 	}

// 	cout << max;
// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n, q;
// 	cin >> n >> q;
// 	map<int, int>m;

// 	int a, b, k;
// 	while (q--)
// 	{
// 		cin >> a >> b >> k;
// 		for (int i = a; i < b; ++i)
// 		{
// 			m[i] += k;
// 		}
// 	}
// 	int cm = 0;
// 	for (auto it = m.begin(); it != m.end(); it++)
// 	{
// 		if (it->second > cm)
// 		{
// 			cm = it->second;
// 		}
// 	}
// 	cout << cm << endl;
// 	return 0;
// }