#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t, n, sum = 0;
	//int a[n];
	cin >> t;

	while (t--)
	{


		cin >> n;
		sum = (n * (n + 1)) / 2;
		//cout << sum << endl;
		if (sum % 2 != 0)
		{
			cout << 0 << endl;
			continue;

		}
		else
		{	ll c = 0;
			sum /= 2;

			if (n <= sum)
			{
				ll i = n;
				while (sum >= n)
				{
					sum = sum - n;
					c++;
					n--;
				}
				c++;

				cout << c << endl;
				continue;
			}
			cout << 0 << endl;




		}

	}


	return 0;
}