#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		ll x1, y1;
		cin >> x1 >> y1;
		ll c;
		cin >> c;
		while (c--)
		{
			ll x2, y2;
			cin >> x2 >> y2;
			ll z = 0;
			char a;
			for (int i = 0; i < s.length(); i++)
			{
				a = s.at(i);
				if (x1 < x2 and a == 'R')
				{
					x2--;
					z++;
				}
				else if (x1 > x2 and a == 'L' )
				{
					x2++;
					z++;
				}
				else if (y1 < y2 and a == 'U')
				{

					y2--;
					z++;
				}
				else if (y2 < y1 and a == 'D')
				{
					y2++;
					z++;
				}
				if (x1 == x2 && y1 == y2)
				{
					cout << "YES " << z << endl;
					break;
				}
			}


			cout << "NO";
			break;


		}
	}
}