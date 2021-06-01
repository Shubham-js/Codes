#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	stack < pair<int, int> > s;
	vector<int> v;
	//nearest smallest to left
	for (int i = 0; i < n; i++)
	{
		if (s.size() == 0)
		{
			v.push_back(-1);

		}
		else if (s.size() > 0 and s.top().first > a[i])
		{
			while (s.size() > 0 and s.top().first > a[i])
			{
				s.pop();
			}
			if (s.size() == 0)
			{
				v.push_back(-1);
			}
			else
			{
				v.push_back(s.top().second);
			}
		}
		else if (s.size() > 0 and s.top().first <= a[i])
		{
			v.push_back(s.top().second);
		}
		s.push(make_pair(a[i], i));
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << v[i] << " ";
	// 	/* code */
	// }


	//nearest smallest to right
	while (s.size() != 0)
	{
		s.pop();
	}
	std::vector<int> r;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s.size() == 0)
		{
			r.push_back(7);

		}
		else if (s.size() > 0 and s.top().first > a[i])
		{
			while (s.size() > 0 and s.top().first > a[i])
			{
				s.pop();
			}
			if (s.size() == 0)
			{
				r.push_back(7);
			}
			else
			{
				r.push_back(s.top().second);
			}
		}
		else if (s.size() > 0 and s.top().first <= a[i])
		{
			r.push_back(s.top().second);
		}
		s.push(make_pair(a[i], i));
	}
	// cout << endl;
	// for (int i = n - 1; i >= 0; --i)
	// {
	// 	cout << r[i] << " ";
	// 	/* code */
	// }
	int j = n - 1, area = 0;
	for (int i = 0; i < n; i++)
	{
		area = max((r[j] - v[i]) * a[i], area);
	}
	cout << area << endl;
}