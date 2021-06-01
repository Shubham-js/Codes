#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	char ch[100005];
	char c[100005];

	while (t--)
	{
		int n;
		cin >> n;
		cin >> ch >> c;
		int count = 0;
		//cout << ch << c << endl;
		sort(ch, ch + n);
		sort(c, c + n);
		for (int i = 0; i < n; i++)
		{
			if (ch[i] != c[i])
				count++;

		}
		//cout << count << endl;
		if (count > 2)
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