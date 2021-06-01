#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll q, k; //q is the number of queries and k is the kth nearest hostel;
	cin >> q >> k;
	priority_queue<ll>pq;
	ll third = 0;
	ll x, y, type, dist = 0;
	for (int i = 0; i < k; ++i)
	{	cin >> type >> x >> y;
		dist = pow(x, 2) + pow(y, 2);
		pq.push(dist);

	}

	third = pq.top();
	pq.pop();
	q = q - k;
	while (q--)
	{
		cin >> type;

		if (type == 2)
		{
			cout << third << endl;
		}
		else
		{	cin >> x >> y;
			dist = pow(x, 2) + pow(y, 2);
			if (dist <= third)
			{
				pq.push(dist);
				third = pq.top();
				pq.pop();
			}
		}
	}
	return 0;
}