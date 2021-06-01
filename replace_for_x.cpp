// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t, n, x, p, k;
// 	cin >> t;
// 	//cout << t << endl;
// 	while (t--)
// 	{
// 		cin >> n >> x >> p >> k;
// 		int a[n];
// 		// vector<int> a; int sum = 0, c = 0, temp = 0;
// 		// for (int i = 0; i < n; i++)
// 		// {
// 		// 	cin >> temp;

// 		// 	a.push_back(temp);
// 		// 	sum += temp;
// 		// }

// 		// sort(a.begin(), a.end());
// 		// if (a[p] == k)
// 		// {
// 		// 	cout << 0 << endl;
// 		// 	continue;
// 		// }



// 		// while (n >= k )
// 		// {
// 		// 	sum -= a[k];
// 		// 	auto it = (a.begin() + k);
// 		// 	a.erase(it);
// 		// 	n--;
// 		// 	c++;
// 		// 	if (a[p] == x)
// 		// 	{

// 		// 		cout << c << endl;
// 		// 		continue;
// 		// 	}


// 		// }
// 		// if (n < k)
// 		// {
// 		// 	cout << -1 << endl;
// 		// }
// 		int small = 0, large = 0;
// 		bool flag = false;
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> a[i];
// 			if (a[i] == x)
// 			{
// 				flag = true;
// 			}
// 			if (a[i] < x)
// 			{
// 				small++;
// 			}
// 			else
// 			{
// 				large++;
// 			}
// 		}
// 		if (!flag)
// 		{
// 			cout << -1 << endl;
// 			continue;
// 		}
// 		sort(a, a + n);
// 		p = p - 1;

// 		if (a[p] == x)
// 		{
// 			cout << 0 << endl;
// 		}
// 		while (a[p] != x)
// 		{

// 		}


// 		cout << p - small << endl;
// 	}
// 	return 0;
// }


#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int findIndex(int a[], int n, int x, int p) {
	int min = 100000000, minp;
	for (int i = 0; i < n; i++)
		if (a[i] == x) {
			if (abs(p - i) < min) {
				min = abs(p - i);
				minp = i;
			}
		}
	return minp;
}
void subMain() {
	int N, X, p, k;
	cin >> N >> X >> p >> k;
	int a[N];
	for (int i = 0; i < N; i++)
		cin >> a[i];
	sort(a, a + N);
	int index = findIndex(a, N, X, p);
	int count = 0;
	if (a[index] != X) {
		a[k - 1] = X;
		sort(a, a + N);
		count++;
	}
	if (a[p - 1] == X) {
		cout << 0 + count;
		return;
	}
	if (p < k && a[p - 1] < X) {
		cout << -1;
		return;
	}
	if (p > k && a[p - 1] > X) {
		cout << -1;
		return;
	}
	index = findIndex(a, N, X, p) + 1;
	cout << abs(p - index) + count;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--) {
		subMain();
		cout << "\n";
	}
	return 0;
}

