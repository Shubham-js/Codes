#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	vector<int>v;
	stack<int>s;
	for (int i = 0; i < n; i++)
	{
		if (s.size() == 0)
		{
			v.push_back(-1);
		}
		else if (s.size() > 0 and s.top() < a[i])
		{
			v.push_back(s.top());
		}
		else if (s.size() > 0 and s.top() >= a[i])
		{
			while (s.size() > 0 and s.top() >= a[i])
			{
				s.pop();
			}
			if (s.size() == 0)
			{
				v.push_back(-1);
			}
			else
			{
				v.push_back(s.top());
			}
		}
		s.push(a[i]);
	}
	for (auto it : v)
	{
		cout << it << endl;
	}
	return 0;
}