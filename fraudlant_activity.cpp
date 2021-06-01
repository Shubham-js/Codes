#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n, k;
	cin >> n >> k;
	priority_queue<ll, vector<ll>, greater<ll>>pq;
	//first input k elements
	ll temp;
	for (ll i = 0; i < k; i++)
	{
		cin >> temp;
		pq.push(temp);
	}
	bool m = false;
	ll z = 0; //default for odd k
	if (k % 2 == 0)
	{
		z = k / 2 - 1;

		m = true;
	}
	else
	{
		z = k / 2;
	}
	while (z--)
	{
		ll p = pq.top();
		//cout << p << endl;
		pq.pop();

	}
	//cout << pq.top() << endl;

	double spend;
	ll f = 0;
	for (ll i = k; i < n; i++)
	{
		cin >> spend;
		//cout << spend << endl;
		if (m)
		{
			ll x = pq.top();
			pq.pop();
			ll y = pq.top();
			cout << x << " " << y << endl;
			double sum = (double)(2 * ( (double)(x + y) / (double)2));

			if (spend >= sum)
			{
				f++;
			}
		}
		else
		{
			ll x = pq.top();
			pq.pop();

			if (spend >= 2 * x)
			{
				f++;
			}
		}
		pq.push(spend);

	}
	cout << f << endl;


}