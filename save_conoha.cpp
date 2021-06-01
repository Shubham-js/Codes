// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
// 	ll t, n, k, temp, c = 0;
// 	multiset<ll, greater<ll>> m;
// 	cin >> t;
// 	while (t--)
// 	{
// 		cin >> n >> k;
// 		//ll a[n];
// 		for (ll i = 0; i < n; i++)
// 		{
// 			cin >> temp;
// 			m.insert(temp);
// 		}
// 		while (k > 0 and * m.begin() > 0)
// 		{
// 			ll changer = *m.begin();
// 			k = k - changer;
// 			c++;
// 			m.erase(m.lower_bound(changer));
// 			m.insert(changer / 2);


// 		}
// 		if (k > 0)
// 		{
// 			cout << "Evacuate" << endl;
// 		}
// 		else
// 		{
// 			cout << c << endl;
// 		}
// 		// for (auto x : m)
// 		// {
// 		// 	cout << x << " ";
// 		// }

// 	}
// 	return 0;
// }

#include <iostream>
#include<queue>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--)
	{
		int n, t, x, c = 0;
		priority_queue<int> q;
		cin >> n >> t;

		for (int i = 0; i < n; i++)
		{
			cin >> x;
			q.push(x);
		}
		while (t > 0 && q.top() > 0)
		{

			t -= q.top();
			x = q.top() / 2;
			q.pop();
			q.push(x);
			c++;
		}
		if (t <= 0)
			cout << c << endl;
		else
			cout << "Evacuate" << endl;
	}
	return 0;
}