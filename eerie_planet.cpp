#include<bits/stdc++.h>
using namespace std;

int main()
{
	int h, c, q;
	cin >> h >> c >> q;
	int s, e, hi;
	vector<vector<int>>crew;
	for (int i = 0; i < c; i++)
	{
		cin >> hi >> s >> e;
		crew.push_back({s, e, hi});
	}
	queue < pair<int, int >> g; //guest
	int hg, tg;
	for (int i = 0; i < q; i++)
	{
		cin >> hg >> tg;
		g.push({tg, hg});
	}
	while (!g.empty())
	{
		pair<int, int>p = g.front();
		g.pop();
		if (p.first < crew[0][0])
		{
			cout << "YES" << endl;
			continue;
		}

		bool flag = true; //pass kar jayega
		for (int i = 0; i < crew.size(); i++)
		{
			if (p.first >= crew[i][0] and p.first <= crew[i][1] and p.second <= crew[i][2])
			{
				cout << "NO" << endl;
				flag = false;
				break;
			}
			else if (p.first < crew[i][0])
			{
				break;
			}

		}
		if (flag)
		{
			cout << "YES" << endl;
		}


	}
	return 0;
}