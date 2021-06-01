#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;

	char s[n];
	char t[n];
	cin >> s >> t;
	int days = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] < t[i])
		{
			int y = t[i] - s[i];
			days += (y / 13) + (y % 13);
		}
		else if (s[i] > t[i])
		{
			int x = 90 - s[i];
			x += t[i] - 64;
			days += (x / 13) + (x % 13);
		}
	}
	cout << days << endl;

}