#include<bits/stdc++.h>
using namespace std;
int pft(int a)
{
	return a != 0 && ((a & (a - 1) ) == 0);
}
int main() {
	int n; cin >> n;
	while (n--)
	{
		int m; cin >> m;
		if (m == 1)
		{
			cout << 1 << endl;
			continue;
		}
		else if (m == 3)
		{
			cout << 1 << " " << 3 << " " << 2 << endl;
			continue;

		}
		else if (m == 5)
		{
			cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 << endl;
			continue;

		}
		else if (pft(m))
		{
			cout << -1 << endl;
			continue;
		}
		else {
			cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 << " ";
			int i = 6;
			while (i <= m)
			{
				if (pft(i)) {
					cout << i + 1 << " " << i << " ";
					i += 2;
				}
				else
				{
					cout << i << " ";
					i++;
				}
			}
			cout << endl;


		}
	}
	return 0;
}