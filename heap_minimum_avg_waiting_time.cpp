#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Pizza {
public:
	ll ot;//order time
	ll pt;//preparation time
	Pizza()
	{
		ot = 0;
		pt = 0;
	}

};
class CompareOT {
public:
	bool operator()(Pizza a, Pizza b)
	{
		//cout << "Comparing " << a.ot << " " << b.ot << endl;
		return a.ot > b.ot;

	}
};
class ComparePT {
public:
	bool operator()(Pizza a, Pizza b)
	{
		//cout << "Comparing " << a.ot << " " << b.ot << endl;
		return a.pt > b.pt;

	}
};



int main() {
	priority_queue < Pizza, vector<Pizza>, CompareOT> order;
	priority_queue < Pizza, vector<Pizza>, ComparePT> prep;
	ll n;
	cin >> n;
	ll m = n;
	ll o, p;
	while (n--)
	{	cin >> o >> p;
		Pizza px;
		px.ot = o;
		px.pt = p;
		order.push(px);
	}
	ll avt = 0;
	ll pre, ord;
	Pizza x = order.top();
	ord = x.ot;
	pre = x.ot + x.pt;
	order.pop();
	ll wt = pre - x.ot;
	avt = wt;
	// cout << wt << endl;
	// for (Pizza a : order)
	//     cout << a.ot << endl;
	while (!order.empty())
	{
		while (!order.empty() && pre > order.top().ot)
		{
			prep.push(order.top());
			order.pop();
		}
		if (prep.empty())
		{
			prep.push(order.top());
			pre = x.pt;
			order.pop();
		}
		x = prep.top();
		prep.pop();
		pre += x.pt;
		wt = pre - x.ot;
		// cout << wt << endl;
		avt  = avt + wt;


	}
	while (!prep.empty())
	{
		x = prep.top();
		prep.pop();
		pre += x.pt;
		wt = pre - x.ot;
		avt  = avt + wt;
		// cout << wt << endl;

	}
	cout << avt / m << endl;






	// while (!order.empty())
	// {
	//     Pizza m = order.top();
	//     cout << m.ot << endl;
	//     order.pop();
	// }
	return 0;
}