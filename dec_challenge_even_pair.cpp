#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t;
	cin >> t;
	ll a, b;
	ll oca = 0, ocb = 0, eca = 0, ecb = 0, n = 0;
	while (t--)
	{

		cin >> a >> b;
		if (a % 2 != 0)
		{
			oca = (a / 2) + 1;

			eca = a / 2;


		}
		else
		{
			oca = a / 2;

			eca = a / 2;

		}
		if (b % 2 != 0)
		{
			ocb = (b / 2) + 1;

			ecb = b / 2;



		}
		else
		{
			ocb = b / 2;
			ecb = b / 2;
		}
		n = (oca * ocb) + (eca * ecb);
		cout << n << endl;

	}
	return 0;
}