#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		ll n, d0, d1;
		cin >> n >> d0 >> d1;
		ll ans = d0 * 10 + d1;
		n -= 2;
		int s = d0 + d1;
		while (n != 0)
		{
			int a = s % 10;
			ans = ans * 10 + a;
			s = s + a;
			n--;
		}
		if (ans % 3 == 0)
		{
			cout << "Yes" << endl;
		}
		else {

			cout << "No" << endl;
		}

	}
}