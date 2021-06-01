#include<bits/stdc++.h>
using namespace std;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);



	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];




	}
	int i = 0, j = n - 1;
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			double x = sqrt(a[i] + a[j]);
			if (x - floor(x) == 0)
			{
				c++;
			}
		}
	}




	cout << c << endl;
}