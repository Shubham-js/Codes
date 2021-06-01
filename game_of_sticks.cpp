#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		set<int>s;
		int x;
		for (int  i = 0; i < n; i++)
		{

			cin >> x;
			s.insert(x);
		}
		if (*s.begin() == 0)
		{
			if (s.size() == 1)
			{
				cout << 0 << endl;
			}
			else
			{
				cout << s.size() - 1 << endl;
			}
		}
		else
		{
			cout << s.size() << endl;
		}

	}
}