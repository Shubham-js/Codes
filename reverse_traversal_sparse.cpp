#include<bits/stdc++.h>
using namespace std;
int main() {
	int p, q, n;
	cin >> p >> q >> n;
	int a, b;
	int arr[p][q];
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < q; j++)
		{
			arr[i][j] = 0;
		}
	}

	for (int j = 0; j < n; j++)
	{
		cin >> a >> b;
		cin >> arr[a][b];
	}

	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < q; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

