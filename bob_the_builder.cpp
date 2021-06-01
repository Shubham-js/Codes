#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int n;
	while (t--)
	{
		cin >> n;
		int max_length = -1,  count = 0, temp;
		for (int i = 0; i < n; ++i)
		{
			cin >> temp;
			if (temp > max_length)
			{
				max_length = temp;
				count++;
			}
		}
		cout << count << endl;
	}
}