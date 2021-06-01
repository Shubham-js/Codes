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
	vector<int>v;
	stack < pair<int, int>> s;
	for (int i = 0; i < n; i++)
	{
		if (s.size() == 0)
		{
			v.push_back(-1);
		}
		else if (s.size() > 0 and s.top().first > a[i])
		{
			v.push_back(s.top().second);
		}
		else if (s.size() > 0 and s.top().first <= a[i])
		{
			while (s.size() > 0 and s.top().first <= a[i])
			{
				s.pop();

			}
			if (s.size() == 0)
			{
				v.push_back(-1);
			}
			else {
				v.push_back(s.top().second);
			}



		}
		s.push({a[i], i});
	}
	for (int i = 0; i < n; i++)
	{
		cout << i - v[i] << " ";
	}
	//cout<<"END"<<endl;
	return 0;
}