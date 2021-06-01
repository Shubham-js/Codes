#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int networkDelayTime(vector<vector<int>>& times, int n, int k) {
		int m = times.size();
		vector< pair<int, int> > adj[n + 1];
		for (int i = 0; i < m; i++) {
			adj[times[i][0]].push_back( { times[i][1], times[i][2]} );
		}
		vector<int> time(n + 1, -1);
		// for(int i=0; i<n; i++) {
		//     cout << time[i] << " ";
		// }
		// cout << endl;
		queue< pair<int, int> > que;
		time[k] = 0;
		que.push({k, 0});

		while (!que.empty()) {
			auto p = que.front();
			que.pop();
			int u = p.first;
			int w = p.second;
			for (pair<int, int> ed : adj[u]) {
				if (time[ed.first] == -1 || time[ed.first] > w + ed.second) {
					time[ed.first] = w + ed.second;
					que.push( {ed.first, w + ed.second} );
				}
			}
		}
		int ans = -1;
		for (int i = 1; i <= n; i++) {
			ans = max(ans, time[i]);
			if (time[i] == -1)  {
				ans = -1;
				break;
			}
		}

		return ans;
	}
};

int main()
{
	vector<vector<int>>v = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
	Solution s;
	cout << s.networkDelayTime(v, 4, 2);
}