#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int t, g, i, n, q, hc, tc;
	cin >> t;
	while (t--) {

		cin >> g;

		while (g--) {
			cin >> i >> n >> q;
			hc = 0 , tc = 0;

			if (i == 1)
			{
				if (n % 2 == 0)
				{
					hc = n / 2;
					tc = n / 2;
				}
				else
				{
					hc = n / 2;
					tc = n / 2 + 1;
				}
			}
			else
			{
				if (n % 2 == 0)
				{
					hc = n / 2;
					tc = n / 2;
				}
				else
				{
					tc = n / 2;
					hc = n / 2 + 1;
				}
			}


			if (q == 1)
				cout << hc << "\n";
			else
				cout << tc << "\n";
		}

	}
	return 0;
}
