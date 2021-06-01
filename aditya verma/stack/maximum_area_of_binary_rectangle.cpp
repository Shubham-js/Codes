#include <bits/stdc++.h>
using namespace std;



int MAH(vector<int>a, int n) {
	stack < pair<int, int> > s;
	vector<int> v;

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
		else if (s.size() > 0 and s.top().first < a[i])
		{
			v.push_back(s.top().second);
		}
		s.push(make_pair(a[i], i));
	}
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
		/* code */
	}


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
	cout << endl;
	for (int i = n - 1; i >= 0; --i)
	{
		cout << r[i] << " ";
		/* code */
	}
	int j = n - 1, area = 0;
	for (int i = 0; i < n; i++)
	{
		area = max((r[j] - v[i]) * a[i], area);
		cout << area << endl;
	}
	;
	cout << area << endl;
	return area;

}
int main() {
	int r, c;
	cin >> r >> c;
	int a[r][c];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> a[i][j];
		}
	}
	vector<int> v;
	int mx = 0, mv = 0;
	for (int i = 0; i < c; i++)
	{
		v.push_back(a[0][i]);



	}
	mx = MAH(v, c);

	for (int i = 1; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] == 0)
			{
				v[j] = 0;
			}
			else
			{
				v[j] = v[j] + a[i][j];
			}
		}

		mx = MAH(v, c);
		mv = max(mv, mx);


	}

	//cout << mv << endl;
	return 0;

}