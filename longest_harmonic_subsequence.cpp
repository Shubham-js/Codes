#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

	int findLHS(vector<int>& v) {
		map<int, int>m;
		for (int i = 0; i < v.size(); i++)
		{
			m[v[i]]++;
		}
		int ans = 0;
		for (auto it = m.begin(); it != m.end(); it++)
		{
			int x = it->first;
			int y = it->second;
			int c = 0;
			if (m.find(x + 1) != m.end())
			{
				c = (m.find(x + 1)->second);
			}
			if (m.find(x - 1) != m.end())
			{
				c = max(m.find(x - 1)->second, c);
			}
			if (c != 0)
			{
				c += y;
			}
			ans = max(ans, c);

		}
		return ans;
	}
};
int main() {
	vector<int>v = {1, 3, 2, 2, 5, 2, 3, 7};
	Solution s;
	cout << s.findLHS(v) << endl;
	return 0;

}