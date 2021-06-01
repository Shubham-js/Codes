#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		cin >> m >> n;
		set<int> a;
		vector<int> b;
		int temp;

		for (int i = 0; i < m; i++)
		{
			cin >> temp;

			a.insert(temp);


		}

		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			if (a.find(temp) != a.end())
			{
				b.push_back(temp);
			}
		}

		int x = b.size();
		if (x <= 1)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << b[x - 1] - b[0] << endl;
		}


	}
	return 0;
}