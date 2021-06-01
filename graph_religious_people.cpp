#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Graph {
	list<ll>*l;
public:
	ll v;
	Graph(ll v)
	{
		this->v = v;
		l = new list<ll>[v];
	}
	void addEdge(ll x, ll y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	ll bfs(ll ct, ll cr)
	{
		vector<bool>visited(v, 0);
		queue<ll>q;
		ll temples = 0;
		ll road = 0;
		ll ans = 0;
		for (ll i = 0; i < v; i++)
		{
			if (!visited[i])
			{
				q.push(i);
				visited[i] = 1;
				while (!q.empty())
				{
					ll node = q.front();
					q.pop();
					for (auto nbr : l[node])
					{
						if (!visited[nbr])
						{
							road++;
							q.push(nbr);
							visited[nbr] = true;
						}
					}
					//if no roads
					if (road == 0)
					{
						ans += ct;
					}
					else
					{
						if (road * cr + ct <= ct * (road + 1))
						{
							ans = ans + road * cr + ct;
						}
						else
						{
							ans = ans + ct * (road + 1);
						}
					}

				}
			}
		}

		return ans;
	}

};
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{

		ll n, m, ct, cr;
		cin >> n >> m >> ct >> cr;

		Graph g(n);
		ll x, y;
		for (ll i = 0; i < m; i++)
		{
			cin >> x >> y;
			g.addEdge(x - 1, y - 1);
		}
		cout << g.bfs(ct, cr) << endl;


	}

	return 0;
}