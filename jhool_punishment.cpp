#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int b, g;
		cin >> b >> g;
		char ch[n];

		if (b / 2 >= g or g / 2 >= b)
		{
			cout << "Little Jhool wins!" << endl;
			continue;
		}






		if (g < b) {
			ch[0] = 'g';
			g--;
		}
		else
		{
			ch[0] = 'b';
			b--;
		}
		//assume
		//pair creation
		for (int i = 1; i < n; ++i)
		{
			if (g == 0)
			{
				ch[i] = 'b';
				continue;
			}
			if (b == 0)
			{
				ch[i] == 'g';
				continue;
			}
			if (n % 2 != 0)
			{
				if (ch[i - 1] == 'b')
				{
					ch[i] = 'g';
				}
				else
				{
					ch[i] = 'b';
				}
			}
			else
			{
				ch[i] = ch[i - 1];
			}
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << ch[i] << " ";
		// }
		// cout << endl;
		int student = 0, teacher = 0;
		for (int i = 1; i < n; ++i)
		{
			if (ch[i] != ch[i - 1])
			{
				teacher++;
			}
			else
			{
				student++;
			}
		}
		if (student > teacher)
		{
			cout << "Little Jhool wins!" << endl;
		}
		else
		{
			cout << "The teacher wins!" << endl;
		}
	}
	return 0;
}