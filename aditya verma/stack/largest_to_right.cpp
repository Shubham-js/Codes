#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	stack<int>s;
	int temp; int a[n];
	for (int i = 0; i < n; i++)
	{

		cin >> temp;
		//s.push(temp);
		a[i] = temp;
	}
	vector<int>v;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s.size() == 0)
		{
			v.push_back(-1);
		}
		else if (s.size() > 0 and s.top() > a[i])
		{
			v.push_back(s.top());

		}
		else if (s.size() > 0 and s.top() <= a[i])
		{
			while (s.size() > 0 and s.top() <= a[i])
				s.pop();

			if (s.empty())
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


	for (int i = n - 1; i >= 0; i--)
	{
		cout << v[i] << " " ;

	}
}


