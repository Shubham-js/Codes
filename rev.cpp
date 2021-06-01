#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;

		cin >> n;
		set<int>s;
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			s.insert(temp);

		}
		for (auto it = s.begin(); it != s.end(); ++it)
		{
			cout << *it << " ";
		}
		cout << endl;

	}
	return 0;
}