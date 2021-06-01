#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c = 0;
		cin >> a >> b;
		for (int i = a; i <= b; i++)
		{
			//c += __builtin_popcount(i);
			int temp = i;
			while (temp > 0)
			{
				if (temp & 1)
				{
					c++;
				}
				temp = temp >> 1;
			}
		}
		cout << c << endl;
	}

}