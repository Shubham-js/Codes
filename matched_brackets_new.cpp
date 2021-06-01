#include<iostream>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int ml = 0, md = 0, a, c = 0, l = 0, pl, pd;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a == 1)
		{
			c++;
			if (md < c)
			{
				md = c;
				pd = i;
			}
		}
		else c--;
		if (c > 0) l++;
		if (c == 0)
		{
			if (l > ml)
			{
				ml = l + 1;
				pl = i - ml + 1;
			}
			l = 0;
		}
	}
	cout << md << " " << pd << " " << ml << " " << pl << endl;
}
int main()
{
	solve();
	return 0;
}
