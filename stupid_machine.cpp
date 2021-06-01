#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n, temp;
		cin >> n;
		ll min = INT_MAX, res = 0;
		while (n--)
		{
			cin >> temp;
			if (temp < min)
			{
				min = temp;
				cout << min << endl;
				res += temp;
				cout << res << endl;
			}
			else {
				res += min;
				cout << res << endl;
			}
		}
		cout << res << endl;
	}

}