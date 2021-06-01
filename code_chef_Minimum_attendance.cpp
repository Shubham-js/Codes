#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		char ch;
		int one = 0, zero = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> ch;
			if (ch == '0')
			{
				zero++;
			}
			else
			{
				one++;
			}
		}
		if (zero > 30)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}

	}
	return 0;
}