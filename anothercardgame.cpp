#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll c, r;
		cin >> c >> r;
		ll C = ceil((double)c / 9.0);
		cout << C << endl;
		ll R = ceil((double)r / 9.0);
		cout << R << endl;
		if (R <= C)
			cout << "1 " << R << endl;
		else
			cout << "0 " << C << endl;
	}
}