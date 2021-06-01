#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin >> t;
	ll n, d;
	ll age;

	while (t--)
	{
		ll non_risk = 0, risk = 0;
		ll days = 0;
		cin >> n >> d;

		for (ll i = 1; i <= n; i++)
		{
			cin >> age;
			if (age <= 9 or age >= 80)
			{
				risk++;
			}
			else
			{
				non_risk++;
			}
		}
		//cout << risk << "  " << non_risk << endl;
		days = ceil((double)risk / (double)d) + ceil((double)non_risk / (double)d);
		cout << days << endl;

	}
}