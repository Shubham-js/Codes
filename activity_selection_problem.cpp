#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a, b;
		int c = 1;
		vector< pair <int, int> > v;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			v.push_back( make_pair(a, b) );
		}


		a = v[0].first;
		b = v[0].second;

		for (int i = 0; i < n - 1; i++)
		{
			if (v[i].second <= v[i + 1].first)

			{
				c++;
			}
		}

		cout << c << endl;

	}

}

