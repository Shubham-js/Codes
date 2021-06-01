#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];


	}

	stack<int>s;
	vector<int>v;
	vector<int>r;
	for (int i = 0; i < n; i++)
	{
		if (s.size() == 0)
		{
			v.push_back(-1);

		}
		else if (s.size() > 0 and a[i] > a[s.top()]) {
			v.push_back(s.top());
		}
		else if (s.size() > 0 and a[i] <= a[s.top()])
		{
			while (s.size() > 0 and a[i] <= a[s.top()]) {
				s.pop();
				//r.push_back(i);
			}
			if (s.size() == 0)
			{
				v.push_back(-1);
				//r.push_back(n);
			}
			else
			{
				v.push_back(s.top());
				//r.push_back(n);
			}

		}




		s.push(i);
	}
	// for (int i : v)
	// {
	// 	cout << i << " ";

	// }
	while (s.size () != 0)
	{
		s.pop();
	}
	//cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s.size() == 0)
		{
			r.push_back(n);
		}
		else if (s.size() > 0 and a[i] > a[s.top()])
		{
			r.push_back(s.top());
		}
		else if (s.size() > 0 and a[i] <= a[s.top()]) {
			while (s.size() > 0 and a[i] <= a[s.top()])
			{
				s.pop();
			}
			if (s.size() == 0)
			{
				r.push_back(n);
			}
			else
			{
				r.push_back(s.top());
			}
		}




		s.push(i);
	}
	reverse(r.begin(), r.end());
	// for (int i : r)
	// {
	// 	cout << i << " ";
	// }
	//cout << endl;
	int m = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		m = max( m, abs(r[i] - v[i] - 1 ) * a[i] );
		/* code */
	}
	cout << m << endl;

	return 0;
}
