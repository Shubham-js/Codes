#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		lli n;
		cin >> n;
		int temp;
		lli con = 0, c = 0;
		for (lli i = 0; i < n; i++)
		{
			cin >> temp;
			if (temp == 1) {
				con = max(con, c);
				c = 0;
			} else {
				c++;
			}


		}
		if (con % 2 == 1) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}

	}

	return 0;
}