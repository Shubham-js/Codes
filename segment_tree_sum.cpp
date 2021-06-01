#include<bits/stdc++.h>
using namespace std;
vector<int>st;
class SegmentTrees {
public:

	// vector<int>a, st;
	// int s, e, node;
	// SegmentTrees(vector<int>&v)
	// {
	// 	a = v;
	// 	s = 0;
	// 	e = a.size() - 1;
	// 	node = 0;
	// }
	void createST(int s, int e, int node, vector<int>&a) {
		if (s == e)
		{
			st[node] = a[s];
			return;
		}
		int mid = (s + e) / 2;
		createST(s, mid, 2 * node + 1, a);
		createST(mid + 1, e, 2 * node + 2, a);
		st[node] = st[2 * node + 1] + st[2 * node + 2];
		return;

	}
};
int main() {

	int n;
	cin >> n;
	vector<int>v;
	int temp;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		v.push_back(temp);
	}
	SegmentTrees s;

	s.createST(0, n - 1, 0, v);
	for (auto x : st)
	{
		cout << x << " ";
	}
	return 0;
}