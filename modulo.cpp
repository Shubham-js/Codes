#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	ll ans = pow(a, b) % c;
	cout << ans ;
	return 0;
}