#include<bits/stdc++.h>
using namespace std;
class Graph {
public:
	unordered_map<string, list<pair<string, int>>>l;
	void addEdge(string x, string y, bool directed, int w)
	{
		l[x].push_back(make_pair(y, w));
		if (directed)
		{
			l[y].push_back(make_pair(x, w));
		}
	}
	void print()
	{
		for (auto it = l.begin(); it != l.end(); it++)
		{
			string city = (*it).first;
			cout << "city " << city << " -> ";
			list<pair<string, int>>s = (*it).second;
			for (auto x : s)
			{
				cout << " (" << x.first << " " << x.second << ") ,";
			}
			cout << endl;
		}
	}
};
int main() {
	Graph g;
	int n;
	cin >> n;
	string x, y;
	int  w;
	bool d;
	for (int i = 0; i < n; ++i)
	{
		//cout << i << endl;
		cin >> x >> y ;
		cin >> d;
		cin >> w;
		cout << x << y << d << " " << w << endl;
		g.addEdge(x, y, d, w);
	}
	g.print();
	return 0;
}