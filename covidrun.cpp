#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int n, k, x, y, c = 0;

	while (t--)
	{
		cin >> n >> k >> x >> y;
		int temp = x;
		bool flag = false;
		if (x == y)
		{
			cout << "YES" << endl;
			break;
		}
		else
		{
			x = (x + k) % n;
			while (temp != x)
			{

				if (x == y)
				{
					cout << "YES" << endl;
					flag = true;
					break;

				}
				x = (x + k) % n;
			}
		}
		if (!flag)
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}