#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int a[t];
	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
	}
	int c = 0;
	for (int i = 0; i < t - 1; i++)
	{
		for (int j = i + 1; j < t; j++)
		{
			if ((a[i] + a[j]) % 60 == 0)
			{
				c++;
			}
		}
	}
	cout << c << endl;

}