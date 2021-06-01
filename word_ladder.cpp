#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	unordered_map<string, list<string>>l;
	void addNode(string x, string y)
	{
		l[x].push_back(y);
		l[y].push_back(x);

	}
	int ladderLength(string b, string e, vector<string>& w) {
		queue<string>q;
		q.push(b);
		int n = b.length();
		while (!q.empty())
		{
			string s = q.front();
			q.pop();
			for (auto x : w)
			{
				int c = 0;
				for (int i = 0; i < n; i++)
				{
					if (x[i] != s[i])
					{
						c++;
					}
				}
				if (c == 1)
				{
					addNode(s, x);
					q.push(x);
				}
			}

		}

		return shortest_path( b, e);
	}
	int shortest_path(string b, string e)
	{
		map<string, int>distance;
		for (auto x : l)
		{
			string node = x.first;
			distance[node] = -1;
		}

		queue<string>q;
		q.push(b);
		distance[b] = 0;
		while (!q.empty())
		{
			string node = q.front();
			q.pop();
			for (auto nbr : l[node])
			{
				if (distance[nbr] == -1)
				{
					distance[nbr] = distance[node] + 1;
					q.push(nbr);
				}
			}

		}

		return distance[e];

	}


};
int main() {
	Solution s;
	string b = "hit";
	string e = "cog";
	vector<string>v = {"hot", "dot", "dog", "lot", "log", "cog"};
	int ans = s.ladderLength(b, e, v);
	cout << ans << endl;
	return 0;
}
