#include<bits/stdc++.h>
using namespace std;
int main() {
	int g, b;
	cin >> b >> g;
	int girls[g], boys[b];
	for (int i = 0; i < b; i++)
	{
		cin >> boys[i];
	}
	for (int i = 0; i < g; i++)
	{
		cin >> girls[i];
	}
	sort(boys, boys + b, greater<int>());
	sort(girls, girls + g, greater<int>());
	int i = b - 1, j = g - 1;
	int d = INT_MAX, sum = 0;
	while (i >= 0 and j >= 0)
	{
		if (boys[i] == girls[j])
		{
			i--;
			j--;
		}
		else if (abs(boys[i] - girls[j]) > abs(boys[i] - girls[j - 1]))
		{
			j--;
		}
		else {
			sum += abs(boys[i] - girls[j]);
			j--;
			i--;

		}
	}
	cout << sum << endl;

}