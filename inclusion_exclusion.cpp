#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin >> t;
	ll prime[] = {2, 3, 5, 7, 11, 13, 17, 19};
	while (t--)
	{
		ll n;
		cin >> n;
		ll subset = (1 << 8) - 1; //since we have 8 primes in range 20 and we dont consider the case of 00000000 so -1
		ll ans = 0;
		for ( ll i = 1; i <= subset; i++)
		{
			ll denom = 1ll;
			ll setbits = __builtin_popcount(i);
			for (int j = 0; j <= 7; j++)
			{
				if (i & (1 << j)) {
					denom = denom * prime[j];

				}
			}
			//cout << denom << endl;
			if (setbits & 1)
			{
				ans += n / denom;
			}
			else
			{
				ans -= n / denom;
			}



		}
		cout << ans << endl;


	}
	return 0;
}